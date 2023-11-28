def time_diff(time1, time2):
    minutes = 0 
    times = [time1, time2]
    times.sort(reverse= True, key= lambda x: (x[0], x[1]))
    hours = times[0][0] - times[1][0]
    
    if times[0][1] < times[1][1]:
        hours -= 1
        minutes = 60 + times[0][1] - times[1][1]
    else:
         minutes = times[0][1] - times[1][1]
    return (hours, minutes)
