echo "Enter the number for which the factorial is to be calculated";
read x;
f=1;
for ((i=1;i<=x;i++))
do
f=$((f*i));
done
echo "Factorial of $x!=$f";
