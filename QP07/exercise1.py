def switch_dict(adict):
    adict_keys = {}
    for (key,value) in adict.items():
        if value in adict_keys:
            adict_keys[value].append(key)

        else:
            adict_keys[value] = [key]


    return adict_keys

        


