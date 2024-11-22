from itertools import chain

r, c = map(int, input().split())

parkingMap = []
ans = [0, 0, 0, 0, 0]

for i in range(r):
    parkingMap.append(list(input()))

for i in range(r-1):
    for j in range(c - 1):
        possibleParkingSpot = list(chain.from_iterable([row[j:j+2] for row in parkingMap[i:i+2]]))
        for squashed in range(5):
            if possibleParkingSpot.count('X') == squashed and '#' not in possibleParkingSpot:
                ans[squashed] += 1
for num in ans:
    print(num)
