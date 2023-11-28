dec = int(input("Decimal number = "))
rest = dec
bin = ""
octal = ""
while rest != 0:
    t = int(rest%2)
    rest = (rest-t)/2
    bin = str(t) + bin
bin_len = len(bin)

while bin_len % 3 != 0:
    bin = "0" + bin
    bin_len = len(bin)
bin_len = len(bin)

for i in range(0,bin_len,3):

    sum = int(bin[i])*4 + int(bin[i+1])*2 + int(bin[i+2])*1
    octal = octal + str(int(sum))


print(octal)