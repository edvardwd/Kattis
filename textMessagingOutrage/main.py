N = int(input())

for i in range(N):
    pressesNeeded = 0
    P, K, L = map(int, input().split())
    freqs = sorted(map(int, input().split()), reverse= True)

    for multiplier in range(1, P + 1):
        pressesNeeded += multiplier * sum(freqs[(multiplier - 1) * K:K*multiplier])
    print(f"Case #{i + 1}: {pressesNeeded}")