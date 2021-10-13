#include <iostream>
#include <math.h>
using namespace std;

int sum_of_squares(int n) {
 
    int tmp = sqrt(n);
    if (tmp * tmp == n) return 1;

    for (int i = 0; i <= tmp; i++) {
        int a = sqrt(n - i * i); //i*i perfect square
        if (a * a == (n - i * i)) return 2;
    }
    
    //4^k(8m+7)
    while (n % 4 == 0) n /= 4; //aby zostało (8m+7)
    if ((n - 7) % 8 == 0) return 4;

    return 3;
}