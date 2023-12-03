t = int(input())
for _ in range(t):
    x, y, k = map(int, input().split())
    res = 0
    if (k + y - 1) % x == 0:
        res = (k + y - 1) // x
    else:
        res = (k + y - 1) // x + 1
    print(res)
