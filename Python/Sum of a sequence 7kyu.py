def sequence_sum(begin_number, end_number, step):
    
    arr = [x for x in range(begin_number, end_number+1, step)]
    return sum(arr)