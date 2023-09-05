number = int(input())
count = 0

for _ in range(number):
    count += number
    number -= 1

print(count)