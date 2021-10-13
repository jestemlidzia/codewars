def high_and_low(numbers): 

    numbers = numbers.split()
    _array = [int(x) for x in numbers]
    return str(max(_array)) + " " + str(min(_array))