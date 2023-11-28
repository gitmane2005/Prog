def is_it_real_prime(number):
    prime = True
    for x in range(2,int(number/2)+1):
        if number%x == 0.0:
            prime = False
            return prime
    return prime
def next_prime(number):
    prime = False
    while prime == False:
        number = number + 1 
        prime = is_it_real_prime(number)
    return number

#print(next_prime(10))
