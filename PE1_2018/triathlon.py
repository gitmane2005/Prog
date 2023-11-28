tS = float(input("Swimming stage time: "))
tC = float(input("Cycling stage time: "))
tR = float(input("Running stage time: "))

ts_ave = 1.5/tS
tc_ave = 40/tC
tr_ave = 10/tR
total_time = tS + tR + tC
if total_time <= 4:
    print(tS+tC+tR)
elif ts_ave < 2:
    print("Swimming")
elif tc_ave < 20:
    print("Cycling")
elif tr_ave < 8:
    print("Running")