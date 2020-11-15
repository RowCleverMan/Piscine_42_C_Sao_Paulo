FIRST="$(echo $FT_NBR1 | sed "s|\'|0|g" | tr '\' '1' | tr '"' '2' | tr "?" "3" | tr "!" "4")"
SECOND="$(echo $FT_NBR2 | tr "m" "0" | tr "r" "1" | tr "d" "2" | tr "o" "3" | tr "c" "4")"
SUM=$(($FIRST + $SECOND))

CONVERT=$(echo "obase=13; ibase=5; $SUM" | bc )

echo $CONVERT | tr "0" "g" | tr "1" "t" | tr "2" "a" | tr "3" "i" | tr "4" "o" |
tr "5" " " | tr "6" "l" | tr "7" "u" | tr "8" "S" | tr "9" "n" | tr "a" "e" |
tr "b" "m" | tr "c" "f"

