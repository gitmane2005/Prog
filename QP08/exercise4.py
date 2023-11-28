def permutations(str):
    result = []
    if len(str) == 0:
        result.append('')
        return result
    elif len(str) == 1:
        result.append(str)
        return result
    else:
        return (all_inserts(permutations(str[1:]), str[0]))
    
def all_inserts(alist, char):
    result = []
    for n_list in alist:
        for a in range(len(n_list)+1):
            result.append(n_list[:a]+ char + n_list[a:])

    return result

#print(sorted(all_inserts(["a"], "b")))


#print(sorted(permutations("1234")))
print(sorted(permutations("abc")))