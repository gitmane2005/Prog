def mult(M, N):
    #check if they are compatible 
    if len(M[0]) != len(N):
        return []
    
    col = len(N[0])
    lin = len(M)
    num = len(M[0])
    res = []
    line = []
    
    for i in range(lin):
        for t in range(col):
            result = 0
            for j in range(num):
                m = M[i][j]
                n = N[j][t]
                result += n*m
            line.append(result)
        res.append(line)
        line = []
                
    return res
