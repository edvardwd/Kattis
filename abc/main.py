nums = list(map(int, input().split()))

A, B, C = sorted(nums)
numDict = {'A' : A, 'B' : B, 'C' : C}

order = input()
print(' '.join([str(numDict[letter]) for letter in order]))

