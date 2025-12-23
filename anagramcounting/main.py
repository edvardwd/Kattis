import math
from collections import Counter
import sys

def solve(line: str):
    # Multinomial coefficient
    num = math.factorial(len(line))
    den = math.prod(map(math.factorial, Counter(line).values()))
    return num // den

for line in sys.stdin:
    line = line.strip()
    print(solve(line))