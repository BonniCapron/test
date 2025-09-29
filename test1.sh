if [ $# -lt 2 ]; then
echo "Введіть два числа:"
read a
read b
else
a=$1
b=$2
fi
if [ $a -gt $b ]; then
temp=$a
a=$b
b=$temp
fi
sum=0
for (( i=$a; i<=$b; i++ )); do
if (( i % 2 == 0 )); then
sum=$((sum + i))
fi
done
echo "Сума всіх парних чисел від $a до $b = $sum"
