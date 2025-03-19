

def outShuffle(deck: list[int]) -> list[int]:
    middle = len(deck) // 2 + (len(deck) % 2)
    shuffled = []
    topHalf = deck[:middle]
    bottomHalf = deck[middle:]
    
    while len(bottomHalf) > 0:
        shuffled.append(topHalf.pop(0))
        shuffled.append(bottomHalf.pop(0))
    if len(topHalf) > 0:
        shuffled += topHalf
    return shuffled


def inShuffle(deck: list[int]) -> list[int]:
    middle = len(deck) // 2
    shuffled = []
    topHalf = deck[:middle]
    bottomHalf = deck[middle:]

    while len(topHalf) > 0:
        shuffled.append(bottomHalf.pop(0))
        shuffled.append(topHalf.pop(0))
    if len(bottomHalf) > 0:
        shuffled += bottomHalf
    return shuffled

n, word = input().split()

deck = list(range(int(n)))
deckCopy = deck[:]

i = 0

while deck != deckCopy or i == 0:
    if word == "out":
        deck = outShuffle(deck)
    else:
        deck = inShuffle(deck)
    i += 1

print(i)