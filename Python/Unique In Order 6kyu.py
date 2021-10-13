def unique_in_order(iterable):
    
    if not iterable:
        return []
    
    unique = []
    unique.append(iterable[0])
    i = 1
    l = len(iterable)
    while i < l:
        if iterable[i] != iterable[i-1]:
            unique.append(iterable[i])
        i += 1
    print(unique)
    return unique