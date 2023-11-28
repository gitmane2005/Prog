def change(amount):
    ways = [200, 100, 50, 20, 10, 5, 2, 1]
    res = []
    for cc in ways:
        while amount >= cc:
            res.append(cc)
            amount = amount - cc

    return res
