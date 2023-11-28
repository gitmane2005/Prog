def sparse_dot_product(dict1, dict2):
    result = 0
    for (key,value) in dict1.items():
        if key in dict2:
            result += dict1[key] * dict2[key]

    return result

