def lift_call(lift_status, user_status):
    counter = 0
    while user_status != lift_status:
        if lift_status > user_status:
            lift_status -= 1
            counter += 1
        elif lift_status < user_status:
            lift_status += 1
            counter += 1
    return counter
users = int(input("How many users?"))
lift_status = int(input("What floor is the lift at?"))
user_status = []
for i in range(users):
    user_status.append(int(input("User " + str(i+1) + ", Which floor you are currently on?")))
lift_visit_after_each_use = []
for i in user_status:
    lift_visit_after_each_use.append(lift_call(lift_status, i))
    lift_status = i
print(sum(lift_visit_after_each_use))