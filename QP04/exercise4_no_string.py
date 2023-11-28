def mastermind(g1, g2, g3, c1, c2, c3):
    #all = ""
    guess = g1
    guess = guess + g2
    guess = guess + g3
    keys = c1
    keys = keys + c2
    keys = keys + c3
    result = 0
    ret = 0
    for i in range(3):
        if guess[i] == keys[i]:
            result =result+3
            guess = guess.replace(guess[i], "1",1)
            keys = keys.replace(keys[i], "2",1)

    for i in range(3):
        for t in range(3):
            if guess[i] == keys[t]:
                result = result + 1
                guess = guess.replace(guess[i], "3",1)
                keys = keys.replace(keys[t], "4",1)
                break
    

    return(result)
print(mastermind("b", "b", "y", "b", "w", "b"))