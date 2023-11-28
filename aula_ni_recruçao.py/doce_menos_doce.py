def doce_menos_doce(alist):
    if len(alist) <= 2:
        #if alist[0] > alist[1]:
        #    return alist[1]
        #elif alist[0] < alist[1]:
        #    return alist[0]
        return min(alist)
    elif len(alist) > 2:
        #if alist[0] > doce_menos_doce(alist[1:]):
        #    return doce_menos_doce(alist[1:])
        #elif alist[0] < doce_menos_doce(alist[1:]):
        #    return alist[0]
        return min(alist[0], doce_menos_doce(alist[1:]))
   
print(doce_menos_doce([120, 180, 200, 10, 2524]))