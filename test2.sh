read -p "Введіть число: " number
if [ "$number" -gt 0 ]; then
    echo "Число $number є додатнє"
elif [ "$number" -lt 0 ]; then
    echo "Число $number є від’ємне"
else
    echo "Число $number дорівнює нулю"
fi

