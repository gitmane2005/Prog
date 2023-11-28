def above(tree, name):
    
    if name in tree[0]:
        return True
    if name in tree[1]:
        return tree[0]
    result = []
    #print(tree[1])
    if type(tree[1]) == list:
        for x in tree[1]:
            if type(x) == tuple:
                if above(x, name) == True:
                    result.append(tree[0])
                    break
                    #result.append(x[0] )
                elif above(x, name) != None:
                    result.append(tree[0])
                    #result.append(above(x, name))
                    if type(above(x, name)) == list:
                        for i in above(x, name):
                            result.append(i)
                    else:
                        result.append(above(x, name))
                    break

    if result == []:
        return None
    else: return result

#print(above(('Jeff',[('Adam', ['Alice', 'Bob']),('Paul',['Eve', 'Louis']),('Roger',[('David',['Jack', 'John']), 'Peter'])]), 'Sophie'))
"""def above(tree:tuple, name:str, people_on_top:list = []):
    if type(tree) == str: return people_on_top if people_on_top and name == tree else None
    if name == tree[0]: return people_on_top if people_on_top else None
    for x in tree[1]:
        result = above(x, name, people_on_top=people_on_top + [tree[0]])
        if result: return result
"""



print(above(('Jeff',[('Adam', ['Alice', 'Bob']),('Paul',['Eve', 'Louis']),('Roger',[('David',['Jack', 'John']), 'Peter'])]), 'Jack'))
