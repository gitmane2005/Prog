def sum_numbers(number):
    sum = 0
    for i in range(1,number+1):
        sum = sum + i
    
    return sum/number

def var_numbers(number, precision = 2):
    sum = 0
    sum_all = sum_numbers(number)
    for i in range(1,number +1):
        sum = sum + (i-sum_all)**2
    
    result= sum/number
    return round(result,precision)

