def search_dictionary(dictionary: list, word: str) -> str:
    word = word.strip().lower()

    left = 0
    right = len(dictionary) - 1

    while left <= right:
        middle = (left + right) // 2

        current_word = dictionary[middle][0].lower()

        if current_word == word:
            return dictionary[middle][1]

        elif current_word < word:
            left = middle + 1
        else:
            right = middle - 1

    return "Слово не знайдено"


dictionary = [
    ("алфавіт", "Впорядкований набір усіх літер, що використовуються в писемності певної мови"),
    ("архотех", "представителей сверхразумного машинного интеллекта"),
    ("архитов", "материалы для модификации генов"),
    ("база даних", "Організована сукупність даних"),
    ("комп'ютер", "Електронний пристрій для обробки інформації"),
    ("ревенант", "мифический дух или оживший мертвец, который восстает из могилы, чтобы преследовать живых"),
    ("яблоко", "Сочного плода яблони"),
]

word = input("Введіть слово: ")
print(search_dictionary(dictionary, word))
