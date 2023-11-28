num1 = int(input())
num2 = int(input())

result = 0
i = 10
while num2 != 0:
    result1 = int(num1 % i)
    result2 = int(num2 % i)
    print(result1, end="")
    print(result2, end="")
    num1 = int(num1/10)
    num2 = int(num2/10)
print()