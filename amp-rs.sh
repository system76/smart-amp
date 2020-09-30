#!/usr/bin/env bash

set -e

if [ ! -f "$1" ]
then
    echo "$0 [amp.txt]" >&2
    exit 1
fi

book="0x00"
page="0x00"
function s {
    reg="$1"
    shift

    if [[ "$reg" = "0x00" ]]
    then
        echo "amp.set_page($@)?;"
        page="$@"
    elif [[ "$page" = "0x00" && "$reg" = "0x7F" ]]
    then
        echo "amp.set_book($@)?;"
        book="$@"
    else
        if [[ "$#" = "1" ]]
        then
            echo "amp.write_at($reg $@)?;" | sed 's/ /, /g'
        else
            echo "amp.write_block_at($reg &[$@])?;" | sed 's/ /, /g'
        fi
    fi
}

cat "$1" | while read line
do
    s $line
done
