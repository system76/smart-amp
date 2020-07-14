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
    case "$reg" in
        "0x00")
            echo "amp.set_page($@)?;"
            page="$@"
            ;;
        "0x7F")
            # TODO: Only when page is 0
            if [ "$page" == "0x00" ]
            then
                echo "amp.set_book($@)?;"
                book="$@"
            else
                echo "tried to set book outside of page 0!"
                exit 1
            fi
            ;;
        *)
            if [ "$#" == "1" ]
            then
                echo "amp.write_at($reg $@)?;" | sed 's/ /, /g'
            else
                echo "amp.write_block_at($reg &[$@])?;" | sed 's/ /, /g'
            fi
            ;;
    esac
}

cat "$1" | while read line
do
    s $line
done
