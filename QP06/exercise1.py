def local_minima(alist):
    min_list = []
    for i in range(len(alist)-2):
        min_list = min_list + min(alist[i:i+3])


    return min_list

def min(list):
    min = list[0]
    repeted = False
    for i in range(1,len(list)):
        if min> list[i]:
            min = list[i]
            repeted = False
        elif min == list[i]:
            repeted = True

    if repeted is True:
        return []
    
    else:
        return [min]


