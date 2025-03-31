n, t = map(int, input().split())
a = list(map(int, input().split()))

if t == 1:
    print(7)
elif t == 2:
    print("Bigger" if a[0] > a[1] else ("Equal" if a[0] == a[1] else "Smaller"))
elif t == 3:
    print(sorted(a[:3])[1])
elif t == 4:
    print(sum(a))
elif t == 5:
    print(sum([num for num in a if num%2 == 0]))
elif t == 6:
    print(''.join([chr(num % 26 + ord('a')) for num in a]))
else: #t == 7
    seen = set()
    i = 0
    while True:
        seen.add(i)
        i = a[i]
        if i < 0 or i >= n:
            print("Out")
            break
        elif i == n - 1:
            print("Done")
            break
        elif i in seen:
            print("Cyclic")
            break