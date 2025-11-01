n = int(input())

for i in range(n):
    cmd = input().split()
    if " ".join(cmd[:2]) == "Simon says":
        print(" ".join(cmd[2:]))