#include <map>
#include <string>
#include <iostream>

using namespace std;

class Roman_Numerals {
private:
  map<string, int> roman{ {"I",1},{"IV",4},{"V",5},{"IX",9},{"X",10},{"XL",40},{"L",50},{"XC",90},{"C",100},{"CD",400},{"D",500},{"CM",900},{"M",1000}
  };

public:

  string to_roman(int n) {

    string out = "";
    int i = 0;
    string tab[13] = { "M" , "CM","D","CD", "C", "XC", "L", "XL", "X","IX","V", "IV", "I" };
    int tabi[13] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };

    while (n > 0) {
      if (n >= tabi[i])
      {
        out += tab[i];
        n -= tabi[i];
      }
      else i++;

    }

    return out;
  };
  int from_roman(string str) {
    int value = 0;
    str += " ";
    string temp = "";
    map <string, int> r{ {"I", 1},{"IV", 4},{"V", 5},{"IX", 9},{"X", 10},{"XL", 40},{"L", 50},{"XC", 90},{"C", 100},{"XD", 400},{"D", 500},{"CM", 900},{"M", 1000}, };

    for (int i = 0; i < str.size(); i++) {

      temp.push_back(str[i]);
      temp.push_back(str[i + 1]);
      if (r.find(temp) != r.end()) {
        value += r[temp];
        i++;
      }
      else {
        temp.clear();
        temp.push_back(str[i]);
        value += r[temp];

      }
      cout << temp << endl;
      temp.clear();
    }
    return value;
  };

}RomanNumerals;