n, m, q = map(int, input().split())

matrix = [[0] * 1002 for _ in range(1002)]
prefixSum = [[0] * 1002 for _ in range(1002)]

for i in range(1, n + 1):
    matrix[i][1:m+1] = map(int, input().split())

for i in range(1, n + 1):
    for j in range(1, m + 1):
        prefixSum[i][j] = matrix[i][j] + prefixSum[i - 1][j - 1]

for _ in range(q):
    x, y = map(int, input().split())
    if prefixSum[x - 1][y - 1] == prefixSum[min(n - x, m - y) + x][min(n - x, m - y) + y] - prefixSum[x][y]:
        print("YES")
    else:
        print("NO")
