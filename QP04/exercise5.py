def deriv(f):

    def df(x):
        h = 0.001
        result = round((f(x + h) - f(x))/h,3)
        return result
    return df


