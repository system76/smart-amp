#!/usr/bin/env bash

# Parses file containing Logic 2 terminal output into just the byte data.

set -e

if [ ! -f "$1" ]
then
    echo "$0 <amp.txt>" >&2
    exit 1
fi

sed -i '/0x4E/!d' "$1"
sed -i 's/write to 0x4E ack data: //' "$1"
sed -i 's/\s\+$//' "$1"
