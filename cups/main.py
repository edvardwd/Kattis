N = int(input())
radiusMap = dict()

for i in range(N):
    color, radius = input().split()

    try:
        radius = int(radius)

    except ValueError:
        color, radius = radius, int(color) / 2

    finally:
        radiusMap[color] = radius
print("\n".join(sorted(radiusMap.keys(), key = lambda x: radiusMap[x])))