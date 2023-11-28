def genealogy(l1):
    dic = {}
    for i in l1:
        if i[1] in dic:
            dic[i[1]] = dic[i[1]] + [i[0]]
        else:
            dic[i[1]] = [i[0]]
    
    result = []
    relation = ["sibling", "parent", "cousin","grandparent"]
    for i in relation:
        if i in dic.keys():
            result.append((dic[i], i))
        else:
            continue
    return result

print(genealogy([("Ana", "sibling"), ("Carlos", "parent"), ("Diana", "parent")]))