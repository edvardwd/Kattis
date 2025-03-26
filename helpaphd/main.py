n = int(input())

equations = [input() for i in range(n)]

for i, eq in enumerate(equations):
    if eq[0] == 'P':
        print("skipped")
        continue
    a, b = map(int, eq.split('+'))
    print(a + b)
    
