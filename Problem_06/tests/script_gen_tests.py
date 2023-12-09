from random import randint, shuffle


def generate_matrix_input(n, m, q, maxi, index, yes_queries=None):
    if yes_queries is None:
        yes_queries = []
    file_name = f"test{str(index).zfill(2)}.in"
    with open(file_name, 'w') as file:
        matrix = [[0 for _ in range(m + 2)] for _ in range(n + 2)]
        file.write(f"{n} {m} {q + len(yes_queries)}" + "\n")
        for i in range(1, n + 1):
            for j in range(1, m + 1):
                number = randint(-maxi, maxi)
                matrix[i][j] = number

        if yes_queries is not None:
            for el in yes_queries:
                x = el[0]
                y = el[1]
                upper_sum = 0
                for i, j in zip(range(x - 1, -1, -1), range(y - 1, -1, -1)):
                    upper_sum += int(matrix[i][j])
                num = upper_sum // (min(n - x, m - y))
                for i, j in zip(range(x + 1, n + 1), range(y + 1, m + 1)):
                    matrix[i][j] = num
                    if i == n or j == m:
                        matrix[i][j] += upper_sum % (min(n - x, m - y))

        for i in range(1, n + 1):
            values = []
            for j in range(1, m + 1):
                values.append(str(matrix[i][j]))
            row = " ".join(values)
            file.write(row + '\n')

        queries = []
        for _ in range(q):
            x = randint(1, n)
            y = randint(1, m)
            queries.append([x, y])
        for el in yes_queries:
            queries.append([el[0], el[1]])
        shuffle(queries)
        for el in queries:
            file.write(f"{el[0]} {el[1]}" + "\n")


yes_queries = [[(10**3) // 2, 10**3 // 2], [(10**3) // 2 + 1, 10**3//2], [10**3//2 + 2, 10**3//2], [9, 1], [1, 10]]
generate_matrix_input(1000, 1000, 10**6 - len(yes_queries), 9, 3, yes_queries)
