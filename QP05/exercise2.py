def camel_case(phrase):
    phrase = phrase.lower()
    i = 0
    while not phrase.isalpha():
        for i in range(len(phrase)):
            if not phrase[i].isalpha():
                if i == len(phrase)-1:
                    phrase= phrase[:i]
                else:
                    t = phrase[i+1].upper()
                    phrase= phrase[:i] + t + phrase[i+2:]
                break

    return phrase

