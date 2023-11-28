def mastermind(g1, g2, g3, c1, c2, c3):
    score = 0
    guess = [g1, g2, g3]
    keys = [c1, c2, c3]
    if g1 == c1:
        guess.remove(g1)
        keys.remove(c1)
        score = score + 3
    if g2 == c2:
        guess.remove(g2)
        keys.remove(c2)
        score = score + 3
    if g3 == c3:
        guess.remove(g3)
        keys.remove(c3)
        score = score + 3
    for i in guess:
        for t in keys:
            if i == t:
                score = score + 1
                keys.remove(t)
                break
    

    return(score)

print(mastermind("b", "w", "y", "w", "y", "w"))