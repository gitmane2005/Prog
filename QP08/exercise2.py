def gcd_rec(a, b):
    if b == 0:
        return a
    r = a%b
    a = b
    b = r
    return  gcd_rec(a, b)

