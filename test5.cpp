#!/bin/bash

count=0
cols=5   # кількість стовпців
col=0    # лічильник для форматування

for i in $(seq -w 000000 999999); do
    first=${i:0:3}
    second=${i:3:3}

    sum1=0
    for ((j=0; j<3; j++)); do
        sum1=$((sum1 + ${first:j:1}))
    done

    sum2=0
    for ((j=0; j<3; j++)); do
        sum2=$((sum2 + ${second:j:1}))
    done

    if [ "$sum1" -eq "$sum2" ]; then
        printf "%s\t" "$i"
        count=$((count + 1))
        col=$((col + 1))

        # перенос рядка після 5 квитків
        if [ $col -eq $cols ]; then
            echo
            col=0
        fi
    fi
done

# якщо останній рядок не закритий переносом
if [ $col -ne 0 ]; then
    echo
fi

echo
echo "Кількість щасливих квитків: $count"

