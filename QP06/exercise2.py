def mastermind(guesses, codes):
    perfect_match_score = 0
    partial_match_score = 0
    for i in range(len(codes)):
        if guesses[i] == codes[i]:
            perfect_match_score += 1
            codes[i] = 1
            guesses[i] = 0

    for i in range(len(guesses)):
        for j in range(len(codes)):
            if i == j:
                continue

            if guesses[j] == codes[i]:
                partial_match_score += 1
                codes[i] = 1
                guesses[j] = 0
                break

    return perfect_match_score,partial_match_score

