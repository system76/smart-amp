set -e

if [ ! -f "$1" ]
then
    echo "$0 [amp.txt]" >&2
    exit 1
fi

level=""
function p {
    new="$1"
    shift
    case "$new" in
        "book")
            case "$level" in
                "reg")
                    echo -en "\t}\n\n"
                    ;;
            esac
            echo -en "\t"
            ;;
        "page")
            case "$level" in
                "reg")
                    echo -en "\t}\n\n"
                    ;;
            esac
            echo -en "\t"
            ;;
        "reg")
            case "$level" in
                "book")
                    echo -en "\t{\n"
                    echo -en "\t\t// Page 0\n\n"
                    ;;
                "page")
                    echo -en "\t{\n"
                    ;;
            esac
            echo -en "\t\t"
            ;;
    esac
    echo -en "$@"
    level="$new"
}

book="0x00"
page="0x00"
function s {
    reg="$1"
    shift
    case "$reg" in
        "0x00")
            p page "amp_set_page($@);\n"
            page="$@"
            ;;
        "0x7F")
            # TODO: Only when page is 0
            if [ "$page" == "0x00" ]
            then
                echo
                p book "amp_set_book($@);\n"
                echo
                book="$@"
            else
                echo "tried to set book outside of page 0!"
                exit 1
            fi
            ;;
        *)
            if [ "$#" == "1" ]
            then
                p reg "amp_write_at($reg, $@);\n"
            else
                p reg "amp_write_block_at($reg, {\n"
                i="0"
                for arg in "$@"
                do
                    if [ "$i" == "0" ]
                    then
                        p reg "\t"
                    else
                        echo -n ", "
                    fi
                    echo -n "$arg"
                    i="$(("$i" + 1))"
                    if [ "$i" == "8" ]
                    then
                        i="0"
                        echo ","
                    fi
                done
                echo
                p reg "});\n"
            fi
            ;;
    esac
}

cat <<"EOF"
#include <delay.h>
#include <drivers/i2c/tas5825m/tas5825m.h>

#define R(F) { \
	res = F; \
	if (res < 0) return res; \
}

#define amp_write_at(A, V) R(tas5825m_write_at(dev, A, V))

#define amp_write_block_at(A, ...) { \
	const uint8_t _values[] = __VA_ARGS__; \
	R(tas5825m_write_block_at(dev, A, _values, ARRAY_SIZE(_values))); \
}

#define amp_set_page(P) R(tas5825m_set_page(dev, P))

#define amp_set_book(B) R(tas5825m_set_book(dev, B))

int tas5825m_setup(struct device * dev) {
	int res = 0;

EOF

cat "$1" | while read line
do
    s $line
done

cat <<"EOF"
	}
}
EOF
