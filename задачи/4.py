def validate_brackets(code: str) -> bool:
    stack = []

    pairs = {
        ")": "(",
        "]": "[",
        "}": "{"
    }

    for char in code:
        if char in "([{":
            stack.append(char)

        elif char in ")]}":
            if not stack:
                return False

            if stack[-1] == pairs[char]:
                stack.pop()
            else:
                return False

    return len(stack) == 0

code = input("Введіть код: ")
print(validate_brackets(code))
