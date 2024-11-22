seenX = []
seenY = []

for i in range(3):
    x, y = map(int, input().split())
    seenX.append(x)
    seenY.append(y)

xAns = sorted(seenX, key = lambda x: seenX.count(x))[0]
yAns = sorted(seenY, key = lambda y: seenY.count(y))[0]

print(xAns, yAns)