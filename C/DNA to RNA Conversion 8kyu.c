#include <stdlib.h>
#include <string.h>

char *dna_to_rna(const char *dna)
{
    
    char *result = (char*)malloc(strlen(dna)+1);
    strcpy(result, dna);

    for(int i = 0; i < strlen(dna);i++)
        if(dna[i] == 'T') result[i] = 'U';
  
   result[strlen(dna)] = '\0';
  
    return result;
}
