romans = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }

def roman_to_integer(astring):
    result = romans[astring[-1]]
    next_number = astring[1]
    for number in range(len(astring)-1):
        if romans[astring[number]] >= romans[astring[number+1]] :
            result += romans[astring[number]]
            
        else:
            result -= romans[astring[number]]

    return result
