t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    curr = 0
    ans = 0

    for i in range(n):
        if s[i] == '.':
            ans = max(ans, curr)
        elif s[i] == '#':
            curr += 1
        else:
            curr = 0

    curr = 0

    for i in range(n - 1, -1, -1):
        if s[i] == '.':
            ans = max(ans, curr)
        elif s[i] == '#':
            curr += 1
        else:
            curr = 0

    print(ans)
