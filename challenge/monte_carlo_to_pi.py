import random
import math
import statistics

repes = 1000
trys = []
dev = 10
while dev > 0.005:    
    trys.clear()
    for i in range(100):
        circle = 0
        t = 0
        while t < repes:
            x = random.random()*2
            y = random.random()*2

            prox = math.sqrt((x-1)**2 + (y-1)**2)
            if prox <= 1.0:
                circle = circle  + 1 
            
            t = t + 1
                #print(t)
        pi = (circle/repes) * 4
        trys.append(pi)
    dev = statistics.stdev(trys)
    print(dev)
    repes = repes * 2
    print(repes)

print(sum(trys)/len(trys))
