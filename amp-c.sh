#!/usr/bin/env bash

set -e

if [ ! -f "$1" ]
then
    echo "$0 [amp.txt]" >&2
    exit 1
fi

page="0x00"
function s {
    reg="$1"
    shift

    if [[ "$reg" = "0x00" ]]
    then
        echo -en "\tres = tas5825m_set_page(dev, $@);\n"
        echo -en "\tif (res < 0)\n"
        echo -en "\t\treturn res;\n\n"
        page="$@"
    elif [[ "$page" = "0x00" && "$reg" = "0x7F" ]]
    then
        echo -en "\tres = tas5825m_set_book(dev, $@);\n"
        echo -en "\tif (res < 0)\n"
        echo -en "\t\treturn res;\n\n"
    else
        if [[ "$#" = "1" ]]
        then
            echo -en "\tres = tas5825m_write_at(dev, $reg, $@);\n"
            echo -en "\tif (res < 0)\n"
            echo -en "\t\treturn res;\n\n"
        else
            echo -en "\t{\n"
            echo -en "\t\tconst uint8_t values[] = {"
            i="0"
            for arg in "$@"
            do
                if [[ "$i" = "0" ]]
                then
                    echo -en "\n\t\t\t"
                else
                    echo -n ", "
                fi
                echo -n "$arg"
                i="$(("$i" + 1))"
                if [[ "$i" = "8" ]]
                then
                    i="0"
                    echo -n ","
                fi
            done
            echo -en "\n\t\t};\n"
            echo -en "\t\tres = tas5825m_write_block_at(dev, $reg, values, ARRAY_SIZE(values));\n"
            echo -en "\t\tif (res < 0)\n"
            echo -en "\t\t\treturn res;\n"
            echo -en "\t}\n\n"
        fi
    fi
}

cat <<"EOF"
/* SPDX-License-Identifier: GPL-2.0-only */

#include <drivers/i2c/tas5825m/tas5825m.h>

int tas5825m_setup(struct device *dev, int id)
{
	int res;

EOF

cat "$1" | while read line
do
    s $line
done

cat <<"EOF"
	return 0;
}
EOF
