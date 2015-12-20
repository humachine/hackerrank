read T
for ((i=0;i<T;i++)); do
    read -a inp
    N=${inp[0]}
    C=${inp[1]}
    M=${inp[2]}

    temp=$(expr $N / $C)
    wrap=$temp
    while [ $wrap -gt 0 ]; do
        if [ "$wrap" -ge "$M" ]; then
            t=$(expr $wrap / $M)
            temp=$(expr $temp + $t)
            wrap=$(expr $wrap % $M)
            wrap=$(expr $wrap + $t)
        else
            wrap=-1
        fi
   done
    echo $temp
   
done
