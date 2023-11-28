PE1 = int(input())
PE2 = int(input())
PE3 = int(input())
PE4 = int(input())
result = 0

if PE3 < 40 and PE4 < 40 :
    print("RFF")

else:   
    possible = (PE1, PE2, max(PE3,PE4))
    for i in range(len(possible)):
        result = result + possible[i]
    result = result - min(possible)
    print(int(result/2))
