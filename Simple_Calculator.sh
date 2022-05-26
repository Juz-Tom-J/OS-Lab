echo "Enter Two numbers : ";
read n1;
read n2;

echo "Enter the choice :";
echo "1. Addition";
echo "2. Subtraction";
echo "3. Multiplication";
echo "4. Division";
read choice;

case $choice in
1)result= echo "Result: " $n1+$n2=$(($n1+$n2));;
2)result= echo "Result: " $n1+$n2=$(($n1-$n2));;
3)result= echo "Result: " $n1+$n2=$(($n1*$n2));;
4)result= echo "Result: " $n1+$n2=$(($n1/$n2));;
esac
