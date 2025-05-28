echo "Enter first number"
read a
echo "Enter second number"
read b
echo "Enter third number"
read c

biggest=$a
if (( b > biggest )); then
  biggest=$b
fi
if (( c > biggest )); then
  biggest=$c
fi

echo "Biggest number is: $biggest"
