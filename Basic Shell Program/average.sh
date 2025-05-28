echo "Enter the first number"
read a
echo "Enter the second number"
read b
echo "Enter the third number"
read c

sum=$(( a + b + c ))
average=$(( sum / 3 ))

echo "Average is: $average"
