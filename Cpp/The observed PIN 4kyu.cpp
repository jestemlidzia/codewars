#include <string>
#include <vector>
using namespace std;

vector<string> mergeTwo(vector<string> v1, vector<string> v2) {
    vector<string> out;
    string temp = "";
    for (int i=0; i < v1.size(); i++) {
        for (int j=0; j < v2.size(); j++) {
            temp = v1[i] + "" + v2[j];
            out.push_back(temp);
        }
    }

    return out;
}

std::vector<std::string> get_pins(std::string observed) {
    
    vector<vector<string>> data;
   
    for (auto x : observed)
    {
        switch (x) {

            case '0':
                data.push_back({ "0", "8" }); //0
                break;
            case '1':
                data.push_back({ "1", "2", "4" }); //1
                break;
            case '2':
                data.push_back({ "1", "2", "3", "5" }); //2
                break;
            case '3':
                data.push_back({ "2", "3", "6" }); //3
                break;
            case '4':
                data.push_back({ "1", "4", "5", "7" }); //4
                break;
            case '5':
                data.push_back({ "2", "4", "5", "6", "8" }); //5
                break;
            case '6':
                data.push_back({ "3", "5", "6", "9" }); //6
                break;
            case '7':
                data.push_back({ "4", "7", "8" }); //7
                break;
            case '8':
                data.push_back({ "0", "5", "7", "8", "9" }); //8
                break;
            case '9':
                data.push_back({ "6", "8", "9" }); //9
                break;

        }
    }

    vector<string> v_ = data[0];

    for (int i = 1; i < data.size(); i++) {
        v_ = mergeTwo(v_, data[i]);
    }

    return v_;
}