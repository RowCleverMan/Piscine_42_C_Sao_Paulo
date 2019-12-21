cat /etc/passwd | awk '!/#/' | awk '!(NR%2)' | sed 's|:.*||' | rev | sort -r | awk -v f="$FT_LINE1" -v l="$FT_LINE2" 'NR>=f&&NR<=l' | tr '\n' ','  | sed 's|,|, |g' | sed 's|..$|.|' | tr -d '\n'
