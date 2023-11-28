hours = int(input())
minutes = int(input())
sufix = ""
if(minutes >= 60 or hours >= 24):
    print("INVALID DATE FORMAT")

else:
    if hours > 12:
        sufix = " pm"
        hours = str(hours - 12)
        if minutes == 0:
            minutes = ""
        else:
            minutes = ":" + f"{minutes:02d}"
    elif hours > 0 and hours < 12:
        sufix = " am"
        hours = str(hours)
        if minutes == 0:
            minutes = ""
        else:
            minutes = ":" + f"{minutes:02d}"
    elif hours == 0:
        sufix = " am"
        hours = "12"
        if minutes == 0:
            minutes = ""
        else:
            minutes = ":" + f"{minutes:02d}"

    elif hours == 12:
        sufix = " pm"
        hours = "12"
        if minutes == 0:
            minutes = ""
        else:
            minutes = ":" + f"{minutes:02d}"

    print(str(hours) + str(minutes) + sufix)