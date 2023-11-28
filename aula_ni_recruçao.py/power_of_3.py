def is_power_of_3(num):
    #if num<3:
    #    if num == 1.0:
    #        return True
    #    else:
    #        return False

    #else:
    #    return is_power_of_3(num/3)
    #forma optimizada 
    if num%3 == 0.0:
        return is_power_of_3(num/3)
    elif num == 1.0:
        return True
    else:
        return False
print(is_power_of_3(9))