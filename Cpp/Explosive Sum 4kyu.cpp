#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

using ull = unsigned long long;

ull vec[503][503];

ull exp_sum(unsigned int n)
{
    if(n == 0) return 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            vec[i][j] = 0;
        }
    for (unsigned int m = 0; m < n; m++)
        for (unsigned int k = 0; k <= m; k++) {
            if (k == m || k == 0) vec[m][k] = 1;
            else vec[m][k] = vec[m - k - 1][k] + vec[m - 1][k - 1];
        }

    ull sum = 0;
    for (int i = 0; i < n; i++) sum += vec[n-1][i];

    return sum;
}