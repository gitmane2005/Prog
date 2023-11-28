num = int(input())

for i in range(1, 11): #importante que aqui seja range(1,11) e nao range(1, num+1) pois assim este codigo n funcionaria com 0
    if(i == num):
        print(f"{num} ^ 2 = {num*num}")
        break
    else:
        print(f"{num} x {i} = {num*i}")