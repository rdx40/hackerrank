for ((i = 1; i <= 99; i += 2))
do
  echo $i
done



or


i=1
while [ $i -le 99 ]
do
    echo $i
    i=$((i+2))
done
