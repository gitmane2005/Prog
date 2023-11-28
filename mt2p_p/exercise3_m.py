def total_distance(dist, cities):
    if len(cities) == 1 or len(cities) == 0:
        return 0
    result = 0
    for x in range(0,len(cities)-1):
        if (cities[x],cities[x+1]) in dist:
            result += dist[cities[x],cities[x+1]]
        elif (cities[x+1],cities[x]) in dist:
            result += dist[cities[x+1],cities[x]]
        else:
            return -1
    
    return result