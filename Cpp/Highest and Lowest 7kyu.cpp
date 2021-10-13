#include <string>
#include <iostream>
#include <vector>
using namespace std;


std::string highAndLow(const std::string& numbers){
  int start = 0;
  int stop = 0;
  
  vector<int> arr;
  
  for(int i = 0; i < numbers.size(); i++){
  
    if(numbers[i] == ' '){
      stop = i;
      int num = stoi(numbers.substr(start, stop - start +1));
      arr.push_back(num);
      start = stop;
    }
    
  }
  int num = stoi(numbers.substr(stop));
  arr.push_back(num);
  
  int max = *(max_element(arr.begin(),arr.end()));
  int min = *(min_element(arr.begin(),arr.end()));
  
  return to_string(max) + " " + to_string(min);
  
}