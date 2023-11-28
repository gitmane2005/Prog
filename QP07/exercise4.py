def isomorphic(astring1, astring2):
    maps = {}
    for t in range(len(astring1)):
        if astring1[t] in maps:
            if maps[astring1[t]] != astring2[t]:
                 return (f"'{astring1}' and '{astring2}' are not isomorphic")
        elif astring2[t] in maps.values():
            return (f"'{astring1}' and '{astring2}' are not isomorphic")
                
        else:
            maps[astring1[t]] = astring2[t]

    return (f"'{astring1}' and '{astring2}' are isomorphic")
