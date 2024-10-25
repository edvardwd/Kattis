d, m = map(int, input().split())

intToDay = {0 : "Thursday", 1 : "Friday", 2 : "Saturday", 
            3 : "Sunday", 4 : "Monday", 5 : "Tuesday", 6 : "Wednesday"}

dayNum = d-1
for i in range(1, m):
    if i == 2:
        days = 28
    elif i in [1, 3, 5, 7, 8, 10, 12]:
        days = 31
    else:
        days = 30
    dayNum += days

print(intToDay[dayNum % 7])

