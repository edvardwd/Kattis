N = int(input())
total = 1
m = int(1e9) + 7

#(a * b) % m = ((a % m) * (b % m)) % m
for i in range(N):
    a = int(input())
    total *= (a % m)
print(total % m)