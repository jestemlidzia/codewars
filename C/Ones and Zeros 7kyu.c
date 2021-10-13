#include <stddef.h>
#include <math.h>

unsigned binary_array_to_numbers(const unsigned *bits, size_t count){
  
  int res = 0;
  for(int i = 0; i < count; i++){
    res += bits[i] * pow(2,count-1-i);
  }
  return res;
};