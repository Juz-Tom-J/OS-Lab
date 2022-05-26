echo "Enter the number upto which you want to see the Fibonacci series: ";
read n;
first=0;
second=1;
echo "The Fibonacci series of $n is:";
echo "$first";
echo  "$second";
for((i=2;i<=n;i++))
do
fibonacci=$((first+second));
first=$second;
second=$fibonacci;
echo "$fibonacci";
done
