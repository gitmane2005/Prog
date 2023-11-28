num = int(input())
n = num
result = 0


for i in range(3):
    result = (n%10)**3 + result
    n = int(n/10)

if result == num:
    print(True)
else:
    print(False)