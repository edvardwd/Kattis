n = int(input())
k = int(input())

cardPositions = {}

faceUp = 0
#save positions of seen cards
for i in range(k):
    pos1, pos2, card1, card2 = input().split()
    pos1, pos2 = map(int, [pos1, pos2])
    
    faceUp += (card1 == card2)
    
    if card1 in cardPositions:
        cardPositions[card1] = cardPositions[card1].union(set([pos1]))
    else:
        cardPositions[card1] = set([pos1])
    if card2 in cardPositions:
        cardPositions[card2] = cardPositions[card2].union(set([pos2]))
    else:
        cardPositions[card2] = set([pos2])

#match pairs
pairs = 0
totalSeen = 0
singles = 0

for card, positions in cardPositions.items():
    pairs += (len(positions) == 2)
    singles += (len(positions) == 1)
    totalSeen += len(positions)

cardsLeft = n - totalSeen
ans = pairs - faceUp

if cardsLeft == singles:
    ans += singles
if cardsLeft == 2 and (n - pairs*2 == 2):
    ans += 1


print(ans)