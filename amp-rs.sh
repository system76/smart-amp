#!/usr/bin/env bash

set -e

if [ ! -f "$1" ]
then
    echo "$0 [amp.txt]" >&2
    exit 1
fi

book="00"
page="00"
function s {
    reg="$1"
    shift

    if [[ "$reg" = "00" ]]
    then
        echo "amp.set_page(0x$@)?;"
        page="$@"
    elif [[ "$page" = "00" && "$reg" = "7F" ]]
    then
        echo "amp.set_book(0x$@)?;"
        book="$@"
    else
        if [[ "$#" = "1" ]]
        then
            echo "amp.write_at(0x$reg 0x$@)?;" | sed 's/ /, /g'
        else
            echo "amp.write_block_at(0x$reg, &[0x$@])?;" | sed 's/ /, 0x/2g'
        fi
    fi
}

cat "$1" | while read line
do
    s $line
done
