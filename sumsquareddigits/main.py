import math

numToChar = {10 : "a", 11 : "b", 12 : "c", 13 : "d", 14 : "e", 15 : "f"}
charToNum = dict((value, key) for key, value in numToChar.items())

def decimalToBaseB(n: int, b: int) -> str:
    ans = ""
    while n > 0:
        val = n % b
        if val > 9:
            val = numToChar[val]
        ans = str(val) + ans
        n //= b

    return ans 

def SSD(num: str):
    ans = 0
    for k in num:
        if k in numToChar.values():
            k = charToNum[k]
        ans += int(k)**2
    return ans


P = int(input())

for i in range(P):
    k, b, n = map(int, input().split())
    newBase = decimalToBaseB(n, b)
    print(f"{i + 1} {SSD(newBase)}")
