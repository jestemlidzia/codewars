#include <stdlib.h>
#include <stdio.h>
/* Note:
    should also save the length of the parts_sums in <len>
*/

unsigned long long *parts_sums(size_t *len, const unsigned long long *ls, size_t n)
{
      *len = 0;
      unsigned long long *res = (unsigned long long*)malloc(n*sizeof(unsigned long long)+1);
      res[n]=0;
      for(size_t i = 0; i < n; i++){
          res[n-i-1] = res[n-i] + ls[n-i-1];
      }
  
      *len=n+1;
      return res;
}