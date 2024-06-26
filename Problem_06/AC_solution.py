import sys

n, m, q = map(int, input().split())

matrix = [[0] * 2002 for _ in range(2002)]
prefixSum = [[0] * 2002 for _ in range(2002)]

for i in range(1, n + 1):
    matrix[i][1:m+1] = map(int, sys.stdin.readline().split())

for i in range(1, n + 1):
    for j in range(1, m + 1):
        prefixSum[i][j] = matrix[i][j] + prefixSum[i - 1][j - 1]

for _ in range(q):
    x, y = map(int, sys.stdin.readline().split())
    if prefixSum[x - 1][y - 1] == prefixSum[min(n - x, m - y) + x][min(n - x, m - y) + y] - prefixSum[x][y]:
        sys.stdout.write("YES\n")
    else:
        sys.stdout.write("NO\n")
