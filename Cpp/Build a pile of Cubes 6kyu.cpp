class ASum
{
  public:
  static long long findNb(long long m){
    long long n = 0;
    long long total_volume = 0;

    while (true)
    {
      total_volume += n * n * n;
  
      if (total_volume == m) break;
      if (total_volume > m) {
        n = -1;
        break;
    }

    n++;
  }

  return n;
  };
};