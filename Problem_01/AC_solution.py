N = int(input())
s = input()
msg = "NO"

for char in s:
    if char == 'W':
        msg = "YES"
        break

print(msg)
