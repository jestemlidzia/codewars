def duplicate_count(text):
    
    unique_list = []
    duplicate_list = [] 
    
    for x in text.lower():
        if not x in unique_list:
           unique_list.append(x)
        else:
           if not x in duplicate_list:
              duplicate_list.append(x) 
    return len(duplicate_list) 
