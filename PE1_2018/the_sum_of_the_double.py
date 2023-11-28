d = int(input())
num = int(input())
num_len = len(str(num))
result = 0
for i in range(num_len):
    x = num%10
    num = num//10
    if x > d:
        result = result + 2*x

print(result)