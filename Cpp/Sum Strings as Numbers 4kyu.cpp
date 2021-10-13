#include <string>
#include <sstream>
using namespace std;

std::string sum_strings(const std::string& a, const std::string& b) {

    string copy;
    string copyOrg;
    int lenA = a.length();
    int lenB = b.length();
    int loop;

    if (lenA > lenB) {
        loop = lenA;
        string temp;
        copy = b;
        for (int i = 0; i < (lenA - lenB); i++) {
            temp = temp + "0";
        }
        copy = temp + copy;
        copyOrg = a;
    }
    else if (lenA < lenB) {
        loop = lenB;
        string temp;
        copy = a;
        for (int i = 0; i < (lenB - lenA); i++) {
            temp = temp + "0";
        }
        copy = temp + copy;
        copyOrg = b;
    }
    else {
        loop = lenA;
        copy = a;
        copyOrg = b;
    }

    string result;
    int transfer = 0;
    for (int i = loop - 1; i >= 0; i--) {
        int k = copy[i] - '0';
        int l = copyOrg[i] - '0';


        int t = k + l + transfer;
        if (t > 9) {

            transfer = 1;
            t = t % 10;

        }
        else {

            transfer = 0;
        }
        result = to_string(t) + result;
    }

    if (transfer == 1) result = "1" + result;
    return result;
}