n = int(input())
a = input()
b = input()
ai, bi = 0, 0
turn = True

for i in range(n):
    ai = int(a[i])
    bi = int(b[i])
    if ai < bi:
        turn = not turn
    elif ai == bi:
        break

print("Luffy" if turn else "Zoro")
