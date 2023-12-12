t = int(input())

for _ in range(t):
    n=int(input())
    s = input()
    ans = 0
    last_one = -1
    first_zero = n

    for i in range(n):
        if s[i] == '1':
            last_one = i
        if s[i] == '0':
            first_zero = i
            break

    if last_one != -1 and first_zero != n:
        ans = first_zero - last_one + 1
    elif last_one == -1 and first_zero == n:
        ans = first_zero
    else:
        ans = first_zero - last_one

    print(ans)
