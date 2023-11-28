def triplet(tup):
    tup = sorted(tup)

    for i in range(len(tup) - 2):
        left, right = i + 1, len(tup) - 1
        while left < right:
            current_sum = tup[i] + tup[left] + tup[right]
            if current_sum == 0:
                return lexicographical_order(tup[i], tup[left], tup[right],tup)
            elif current_sum < 0:
                left += 1
            else:
                right -= 1

    return ()

def lexicographical_order(a,b,c, tup):
    index_a = tup.index(a)
    index_b = tup.index(b)
    index_c = tup.index(c)

    index_tup = (index_a,index_b,index_c)
    index_tup = sorted(index_tup)
    print(index_tup)
    




print(triplet((-8, 0, 4, -2, -1, 1, 2)))