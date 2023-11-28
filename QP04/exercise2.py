def adigits(a, b, c):
    high = max(a, b, c)
    low = min(a, b, c)
    all = [a, b, c]
    all.remove(high)
    all.remove(low)
    return low*100+all[0]*10+high

