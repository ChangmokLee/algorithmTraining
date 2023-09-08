import sys

while 1:
    try:
        num1, num2 = map(int, sys.stdin.readline().split())
        print(num1 + num2)
    except:
        break