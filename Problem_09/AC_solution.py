t = int(input())
for _ in range(t):
    n = int(input())
    
    # the arrays count the respective occurrence of A, B, AB, and O
    injured = [0, 0, 0, 0]
    donors = [0, 0, 0, 0]

    injured_input = input().split()
    for s in injured_input:
        if s == "A":
            injured[0] += 1
        elif s == "B":
            injured[1] += 1
        elif s == "AB":
            injured[2] += 1
        elif s == "O":
            injured[3] += 1

    donors_input = input().split()
    for s in donors_input:
        if s == "A":
            donors[0] += 1
        elif s == "B":
            donors[1] += 1
        elif s == "AB":
            donors[2] += 1
        elif s == "O":
            donors[3] += 1

    # check if we can satisfy the injured of blood type O
    if injured[3] <= donors[3]:
        donors[3] -= injured[3]
    else:
        print("NO")
        continue

    # check if we can satisfy the injured of blood type B
    if injured[1] <= donors[1] + donors[3]:
        temp = donors[1]
        donors[1] = max(donors[1] - injured[1], 0)
        injured[1] = max(injured[1] - temp, 0)
        donors[3] = donors[3] - injured[1]
    else:
        print("NO")
        continue

    # check if we can satisfy the injured of blood type A
    if injured[0] <= donors[0] + donors[3]:
        temp = donors[0]
        donors[0] = max(donors[0] - injured[0], 0)
        injured[0] = max(injured[0] - temp, 0)
        donors[3] = donors[3] - injured[0]
    else:
        print("NO")
        continue

    # if A, B, O are all satisfied, then AB is satisfied
    print("YES")
