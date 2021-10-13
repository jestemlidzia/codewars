typedef unsigned long long ull;
ull diagonal(int n, int p)
{
    ull result = 0;
  
    ull tab[n+1][p+1];
  
  
    for(int i = 0; i <n+1; i++){
        for(int j = 0; j <p+1; j++){
          
          if(i == 0){
            if(j == 0) tab[i][j] = 1;
            else tab[i][j] = 0;
          }
          else{
            if(j == 0) tab[i][j] = 1;
            else{
               tab[i][j] = tab[i-1][j] + tab[i-1][j-1];
            }
            
          }
          
          
        }
    }
  
    for(int i = 0;i < n+1; i++){
      result += tab[i][p];
    }
    return result;
}