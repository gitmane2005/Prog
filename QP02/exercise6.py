p_amount = int(input("principal amount: "))
r = float(input("interest rate: "))
n = int(input("frequency that the interest is paid out (per year):"))
t = int(2) 

a = p_amount * ((1 + (r/n))  ** (n*t))
print(round(a, 3))
