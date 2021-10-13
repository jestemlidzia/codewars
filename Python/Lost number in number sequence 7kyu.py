def find_deleted_number(arr, mixed_arr):
    for x in arr:
        if not x in mixed_arr:
            return x
    
    return 0