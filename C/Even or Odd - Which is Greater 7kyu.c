#include <string.h>

const char *even_or_odd(const char *digits) {

    int evens = 0, odds = 0;
  
    for(int i = 0; i < strlen(digits); i++){
      int temp = digits[i]-'0';
      if(temp%2) odds+=temp;
      else evens+=temp;
    }
  
  if(evens > odds) return "Even is greater than Odd";
  else if(evens < odds) return "Odd is greater than Even";
  else return "Even and Odd are the same";
}