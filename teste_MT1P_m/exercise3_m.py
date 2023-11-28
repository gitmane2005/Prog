from math import factorial as fat 

def approx_cos(x, n):
    result = 0
    for k in range(n):
        t = (((-1)**k)*(((x)**(2*k)/fat(2*k))))
        result = result + t
    return round(result,5)

