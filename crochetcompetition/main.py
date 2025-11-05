import datetime as dt


def solve(start: dt.timedelta, end: dt.timedelta):
    diff = end - start
    days = diff.days if diff.days >= 0 else 7 + diff.days
    hours = diff.seconds // 3600
    minutes = (diff.seconds % 3600) // 60
    output = []
    if days:
        output.append(f"{days} days") if days > 1 else output.append(f"{days} day")
    if hours:
        output.append(f"{hours} hours") if hours > 1 else output.append(f"{hours} hour")
    if minutes:
        output.append(f"{minutes} minutes") if minutes > 1 else output.append(f"{minutes} minute")
    return ", ".join(output) if len(output) == 3 else " and ".join(output)

a_day, a_time = input().split()
b_day, b_time = input().split()


a_h, a_m = map(int, a_time.split(":"))
b_h, b_m = map(int, b_time.split(":"))

day_map = {
    "Mon" : 0,
    "Tue" : 1,
    "Wed" : 2,
    "Thu" : 3,
    "Fri" : 4,
    "Sat" : 5,
    "Sun" : 6
    }


start_time = dt.timedelta(days=day_map[a_day], hours=a_h, minutes=a_m)
end_time = dt.timedelta(days=day_map[b_day], hours=b_h, minutes=b_m)


if start_time == end_time:
    print("7 days")
else:
    print(solve(start_time, end_time))