#https://www.hackerrank.com/challenges/bash-tutorials---getting-started-with-conditionals

read -n 1 char
if [ $char = 'y' ] 
then
    echo YES
elif [ $char = 'Y' ]
then
    echo YES
elif [ $char = 'N' ]
then
    echo NO
elif [ $char = 'n' ]
then
    echo NO
fi

