def add(num1, num2):
    num1 = num1.split(".")
    num2 = num2.split(".")
    num1_decimal = num1[1]
    num2_decimal = num2[1]
    num1 = num1[0]
    num2 = num2[0]
    
    dig_len = max(len(num1_decimal), len(num2_decimal))
    num1_decimal = num1_decimal + "0"*(dig_len - len(num1_decimal))
    num2_decimal = num2_decimal + "0"*(dig_len - len(num2_decimal))
    carry = 0
    decimal_result = ""
    for x in range(len(num1_decimal)-1, -1, -1):
        result_i = (int(num1_decimal[x]) + int(num2_decimal[x]) + carry) % 10
        decimal_result = str(result_i)  + decimal_result
        carry = (int(num1_decimal[x]) + int(num2_decimal[x]) + carry) // 10
    final_decimal_result = ""
    for x in range(len(decimal_result)-1, -1, -1):
        if decimal_result[x] == "0":
            final_decimal_result = decimal_result[:x]
        else:
            break
    #return final_decimal_result

    dig_len = max(len(num1), len(num2))
    num1 =  "0"*(dig_len - len(num1)) + num1
    num2 =  "0"*(dig_len - len(num2)) + num2
    result = ""
    for x in range(len(num1)-1, -1, -1):
        result_i = (int(num1[x]) + int(num2[x]) + carry) % 10
        result = str(result_i)  + result
        carry = (int(num1[x]) + int(num2[x]) + carry) // 10
    if carry != 0:
        result = str(carry) + result
    
    return f"{result}.{decimal_result}"
    



#print(add('123.456', '0.124'))