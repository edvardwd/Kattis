def agressive(aggressivTime, calmTime, arrivalTime):
    return 0 < (arrivalTime % (aggressivTime + calmTime)) <= aggressivTime

a, b, c, d = map(int, input().split())
arrivalTimes = map(int, input().split())

for arrival in arrivalTimes:
    if agressive(a, b, arrival) and agressive(c, d, arrival):
        print("both")
    elif agressive(a, b, arrival) or agressive(c, d, arrival):
          print("one")
    else:
         print("none")