def transpose(strMatrix: list[str]):
    return list(map(''.join, zip(*strMatrix)))

while True:
    r, c = map(int, input().split())
    if r == 0 and c == 0:
        break
    mat = [input() for i in range(r)]
    #Sort by the the lowercase value of the columns
    ans = transpose(sorted(transpose(mat), key = lambda word: word.lower())) 
    print('\n'.join(ans))
    print()