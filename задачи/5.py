import time
def climb_recursive(n: int) -> int:
    if n <= 1:
        return 1
    return climb_recursive(n - 1) + climb_recursive(n - 2)
def climb_iterative(n: int) -> int:
    if n <= 1:
        return 1
    a, b = 1, 1  # f(0), f(1)
    for _ in range(2, n + 1):
        a, b = b, a + b
    return b
tests = [10, 20, 30, 35]
print("n | recursive time | iterative time")
print("-------------------------------------")

for n in tests:
    # рекурсія
    start = time.time()
    rec = climb_recursive(n)
    t1 = time.time() - start

    # ітерація
    start = time.time()
    it = climb_iterative(n)
    t2 = time.time() - start

    print(f"{n} | {t1:.6f} s       | {t2:.6f} s")
