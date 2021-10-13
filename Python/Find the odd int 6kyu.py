def find_it(seq):
    
    unique_seq = []
    
    for x in seq:
        if not x in unique_seq:
            unique_seq.append(x)

   
    temp = [x for x in unique_seq if seq.count(x)%2==1]

        
    return temp[0]