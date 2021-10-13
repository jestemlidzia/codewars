def mxdiflg(a1, a2):
    
    if not a1 or not a2:
        return -1
        
    a1Size = []
    a2Size = []
    
    for a in a1:
        a1Size.append(len(a))
    
    for a in a2:
        a2Size.append(len(a))
        
    min_a1 = min(a1Size)
    min_a2 = min(a2Size)
    max_a1 = max(a1Size)
    max_a2 = max(a2Size)
    
    
    x = max_a2 - min_a1
    y = max_a1 - min_a2
    
    if abs(x) > abs(y):
        return abs(x)
    else:
        return abs(y)