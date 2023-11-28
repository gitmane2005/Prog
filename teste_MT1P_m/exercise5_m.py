def n_sei(y):
    sum = 0
    if y< 10:
        return y
    else:
        while y != 0:
            t = y % 10
            y = int((y-t)/10)
            sum = sum + t 
        return sum
    
def validate_cc(number):
    sum = 0
    val = number
    for i in range(16):
        x = val % 10
        val = int((val - x)/10)
        y = val % 10
        val = int((val - y)/10)

        sum =  sum + x + n_sei(y*2)

    if sum % 10 == 0:
        return f"Card number {number} valid"
    else:
        t = sum % 10
        return f"Card number {number} invalid (checksum {t})"



