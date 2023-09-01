# Prompt the user to enter a count
count = int(input())

# Loop 'count' times to read pairs of numbers and print their sum
for _ in range(count):
    # Read two space-separated numbers and convert them to integers
    num1, num2 = map(int, input().split())

    # Print the sum of the two numbers
    print(num1+num2)