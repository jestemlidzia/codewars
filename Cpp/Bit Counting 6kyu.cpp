#include <math.h> 
unsigned long long newNumb(unsigned long long num) {

  unsigned long long n = 0;
  unsigned long long temp = 1;

  while (temp <= num) {
    temp *= 2;
  }
  n = num - temp/2;
  return n;
}

unsigned int countBits(unsigned long long n) {
  
  unsigned int counter = 0;
  while (n != 0) {
    counter++;
    n = newNumb(n);
  }

  return counter;
