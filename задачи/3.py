def create_rating(students: list) -> list:
    n = len(students)

    for i in range(n):
        max_idx = i

        for j in range(i + 1, n):
            if students[j][1] > students[max_idx][1]:
                max_idx = j

        students[i], students[max_idx] = students[max_idx], students[i]

    return students


students = []

while True:
    name = input("Ім'я: ").strip()

    if name == "":
        break

    score_input = input("Бал: ").strip()

    if score_input == "":
        break

    score = float(score_input)

    students.append((name, score))


rating = create_rating(students)

print("\nРейтинг:")
for i, (name, score) in enumerate(rating, start=1):
    print(f"{i}. {name} — {score}")

