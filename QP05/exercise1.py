def rm_letter_rev(ch, s):
    result = ""
    for i in range(len(s)):
        
        if ch == s[i]:
            continue
        result = s[i] + result
    return result

