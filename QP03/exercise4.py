num = int(input())


for i in range(1,num+1):
    if num % 2 == 0:
        med = round(num/2)
        other = int((num - 2) / 2)
        if i ==  med or i == med+1:
            print("#" * other + "00" + "#" * other )
        else:
            print("#"*num)
    else:
        med = int((num/2 + 0.5))
        if i ==  med:
            print("#" * (med-1) + "0" + "#" * (med-1) )
        else:
            print("#"*num)