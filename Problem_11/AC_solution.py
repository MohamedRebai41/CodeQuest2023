n = int(input())
nbM = int(input())
s = [input() for _ in range(nbM)]

i = 0
a = nbM
sum_val = 0

while (sum_val + a) <= n:
    sum_val += a
    a = a * 2
    i += 1

b = n - sum_val
x = 2 ** i
j = 0

if b != 0:
    j = b // x
    if b % x != 0:
        j += 1
    print(s[j - 1])
else:
    print(s[nbM - 1])