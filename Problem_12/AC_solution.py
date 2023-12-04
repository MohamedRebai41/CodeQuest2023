n, l = map(int, input().split())
fights = list(map(int, input().split()))

min_bounty, max_bounty, ans = 0, l, 0

while min_bounty <= max_bounty:
    current_bounty = (min_bounty + max_bounty) // 2
    current_sum = 0

    for i in range(n):
        current_sum += 100 if current_bounty + current_sum > fights[i] else 0
        if current_bounty + current_sum > l:
            break

    if current_bounty + current_sum > l:
        max_bounty = current_bounty - 1
    else:
        ans = current_bounty
        min_bounty = current_bounty + 1

print(ans)
