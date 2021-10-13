#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



void perm(string str, int start_idx, int end_idx, vector<string>& a) {
  if (start_idx == end_idx - 1) {
    a.push_back(str);
  }
  else {
    for (int i = 0; i < end_idx - start_idx; i++) {
      swap(str[start_idx], str[start_idx + i]);
      perm(str, start_idx + 1, end_idx, a);
      swap(str[start_idx], str[start_idx + i]);
    }
  }
}

vector<string> permutations(string s) {
  vector<string> results;
  
  if (s.size() == 0) results.push_back("");
  else {
    perm(s, 0, s.size(), results);
    sort(results.begin(), results.end());
    auto last = unique(results.begin(), results.end());
    results.erase(last, results.end());
  }
  
  return results;
}