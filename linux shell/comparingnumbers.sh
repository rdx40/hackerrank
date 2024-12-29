read X
read Y

if (( $X < $Y))
then
    echo 'X is less than Y'
elif (( $X > $Y ))
then
    echo 'X is greater than Y'
else
    echo 'X is equal to Y'
fi




or




if [ $X -gt $Y ]
then
	echo "X is greater than Y"
elif [ $X -eq $Y ]
then
	echo "X is equal to Y"
else
	echo "X is lesser than Y"
fi
