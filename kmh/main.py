def next_multiple_of_ten(n):
    last_digit = int(str(n)[-1])
    diff = 10 - last_digit
    return n + diff


N = int(input())

highest = 20
highest_limit_seen = 10
current = 10
for i in range(N):
    L = input()
    if L == "/":
        L = next_multiple_of_ten(current)
        if L <= highest_limit_seen:
            L = next_multiple_of_ten(highest_limit_seen)
        L = max(highest, L)
        highest = L
    else:
        L = int(L)
        highest_limit_seen = max(highest_limit_seen, L)
    current = L
    print(current)



