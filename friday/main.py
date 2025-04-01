T = int(input())
ans = []

for i in range(T):
    D, M = map(int, input().split())
    d = list(map(int, input().split()))

    month = 1
    day = 1
    weekday = 0
    friday13 = 0

    while month <= M and day <= d[month - 1]:
        day += 1
        weekday = (weekday + 1) % 7
        if day - d[month - 1] == 1:
            day = 1
            month += 1
        elif day == 13 and weekday == 5:
            friday13 += 1
    ans.append(str(friday13))

print('\n'.join(ans))

