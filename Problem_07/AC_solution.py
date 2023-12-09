def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = [0] * (n + 1)
    b[0] = 0
    total_sum = 0

    for i in range(n):
        total_sum += a[i]
        b[i + 1] = total_sum

    if total_sum % 2 != 0:
        print("0")
        return

    target_sum = total_sum // 2
    ans = 0
    i, j = 0, 1

    while i < n - 1 and j < n:
        if b[j] - b[i] == target_sum:
            ans += n - 2
            i += 1
            j += 1
        elif b[j] - b[i] < target_sum:
            j += 1
        else:
            i += 1

    print(ans)


if __name__ == "__main__":
    solve()
