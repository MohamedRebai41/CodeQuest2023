t = int(input())

for _ in range(t):
    n = int(input())
    test = False

    for r in range(11):
        if (n - 111 * r) >= 0 and (n - 111 * r) % 11 == 0:
            test = True
            break

    if test:
        print("YES")
    else:
        print("NO")
