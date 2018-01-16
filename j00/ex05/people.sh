ldapsearch -LLL 'uid=z*' 'uid=Z*' cn|sort -rf | grep cn| cut -c 5-
