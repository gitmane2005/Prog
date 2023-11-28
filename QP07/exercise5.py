def next_middle_square(number, digits):
   """Compute the next pseudo-random using the 
      middle square algorithm and the given number of digits."""
   k = digits // 2         # half of the number of digits
   square = number*number  # compute the square
   middle = (square // (10**k)) % (10**digits)   # extract middle part
   return middle

def cycle_length(number, digits):
   allready_appered = {number}
   t = next_middle_square(number, digits)
   allready_appered.add(t)
   while True:
        t = next_middle_square(t, digits)
        if t in allready_appered:
            firts_appered = t
            x = 1
            while True:
                    t = next_middle_square(t, digits)
                    if t == firts_appered:
                        return x
                    x += 1
                    
        allready_appered.add(t)
