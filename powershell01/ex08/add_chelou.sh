echo $FT_NBR1 + $FT_NBR2 | sed "s/\'/0/g" | sed "s/\\\/1/g" | tr '"?!' '234' | tr 'mrdoc' '01234' |xargs echo "ibase=5; obase=23;" | bc | tr '0123456789ABC' 'gtaio luSnemf'
