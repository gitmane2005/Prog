def check_friendly(number_one, number_two):
    if number_one == number_two:
        return f"identical numbers: {number_one}"
    elif sum_devisores(number_one)==number_two and sum_devisores(number_two)==number_one:
        return f"{number_one} and {number_two} are friendly"
    
    elif sum_devisores(number_one)!=number_two:
        return f"sum of divisors of {number_one} is not {number_two}"
    
    elif sum_devisores(number_two)!=number_one:
        return f"sum of divisors of {number_two} is not {number_one}"

def sum_devisores(n):
    sum = 0
    for i in range(1,n-1):
        if n%i == 0:
            sum = sum + i
        else:
            continue

    return sum

