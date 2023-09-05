total_cost = int(input())
total_number = int(input())
add_cost = 0
add_number = 0

for i in range(1, total_number+1):
    cost, number = map(int, input().split())
    add_cost += cost * number

if add_cost == total_cost:
    print("Yes")
else:
    print("No")