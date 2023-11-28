def mask_data(data, n_characters, position):
    data_str = str(data)
    total_characters = len(data_str)

    if n_characters == 0:
        return data_str  

    if n_characters <= 0 or n_characters >= total_characters:
        return '*' * total_characters  

    if position == "begin":
        masked_part = '*' * n_characters
        return masked_part + data_str[n_characters:]
    elif position == "end":
        masked_part = '*' * n_characters
        return data_str[:-n_characters] + masked_part
    else:
        return data_str  


#codigo feito por mim que nao passa nos teste privados n sei porque 
def mask_data(data, n_characters, position):
    result = data
    data_str = str(data)
    if 0>n_characters or n_characters > len(data_str):
        result = "*"*len(data_str)

    elif position == "begin":
        result = n_characters*"*" + result[n_characters:]
    else:
        
        result = result[:-n_characters] + n_characters*"*"
        
    return result

