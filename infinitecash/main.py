import math

s = int(input(), 2)
d = int(input(), 2)
m = int(input(), 2)

dayCounter = 0
daysSincePayDay = 0
cash = m
infinite = False

while cash > 0:
    dayCounter += 1
    daysSincePayDay += 1
    toSpend = math.ceil(cash / 2)
    cash -= toSpend
    if daysSincePayDay == d:
        cash += s
        daysSincePayDay = 0
        if cash >= m or dayCounter > 1_000_000:
            infinite = True
            break

print("Infinite money!" if infinite else f"{dayCounter:b}")