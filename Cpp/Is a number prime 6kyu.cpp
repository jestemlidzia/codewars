bool isPrime(int num) {
  std::cout << num;
  if (num < 2 ) return false;
  for (int i = 2; i*i <= num; i++) if (num % i == 0) return false;

  return true;
}