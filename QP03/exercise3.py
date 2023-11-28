num = int(input())

result = 0
i = 10
while num != 0:
    result = int(num % i)
    print(result, end="")
    num = int(num/10)
print()
    