def magic(mat):
    n = len(mat)
    res = []
    
    #check lines
    for i in range(n):
        t = 0
        for b in mat[i]:
            t = t + b
        res.append(t)
    
    #check collums
    for i in range(n):
        t = 0
        for b in range(n):
            c = mat[b][i]
            t += c
        res.append(t)

    t = 0
    #first diagonal
    for i in range(n):
        t += mat[i][i]
    res.append(t)
    t = 0
    #second diagonal
    for i in range(n-1, -1, -1):
        for b in range(n):
            if i + b == n-1:
                c = mat[i][b]
                t += mat[i][b]
                break
    
    res.append(t)
    return all(i == res[0] for i in res)

