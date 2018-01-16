at /etc/passwd | grep -v '#' | sed -e 'N;s/^.*\n//' | cut -d : -f 1 | rev | sort -rf | sed -n $FT_LINE1','$FT_LINE2'p' | cat -e| tr '\n' ' ' | tr '$' ',' | rev | sed 's/,/./1' | sed \
's/ //1' | rev
