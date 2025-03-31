def x_next(x: str):
    return str(len(x))


x0 = input()
while x0 != "END":
    x = [x0, x_next(x0)]
    while x[-1] != x[-2]:
        x.append(x_next(x[-1]))

    print(len(x) - 1)
    x0 = input()