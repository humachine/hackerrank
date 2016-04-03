read N
ans=0
for (( c=1; c<=$N; c++ ))
do
    read inp
    ans=$((ans+inp))
done
printf %.3f $(echo $ans/$N | bc -l)


