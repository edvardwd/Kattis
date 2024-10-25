left, right = map(len, input()[:-1].split("("))
print("correct" if left == right else "fix")