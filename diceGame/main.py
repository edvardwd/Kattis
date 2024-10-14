gunnar = list(map(int, input().split()))
emma = list(map(int, input().split()))

avgGunnar = (sum(gunnar[:2]) + sum(gunnar[2:])) / 2
avgEmma = (sum(emma[:2]) + sum(emma[2:])) / 2

if avgGunnar > avgEmma:
    print("Gunnar")
elif avgEmma > avgGunnar:
    print("Emma")
else:
    print("Tie")