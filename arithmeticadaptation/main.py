s = int(input())

if s < 0:
    a = -2 if s != -2 else -1
elif s > 0:
    a = 2 if s != 2 else 1
else:
    a = 1
b = s - a

print(a, b)
