availableSecs = int(input().split()[0]) * 60

songTimes = list(map(int, input().split()))
songTimes.sort()

singingTime = 0

for songTime in songTimes:
    singingTime += songTime
    if singingTime > availableSecs:
        singingTime -= songTime
        break

print(singingTime)