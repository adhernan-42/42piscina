cat /etc/passwd | awk '! /#/ {print}' | awk " NR % 2 == 1" | awk -F ":" '{print $1}' |  rev | sort -r | awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./g' | tr -d '\n'