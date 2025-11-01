
def solution(line):
    new = []
    for word in line:
        if word in new:
            return 'no'
        new.append(word)
    return 'yes'

line = list(map(str.strip, input().split()))
print(solution(line))
