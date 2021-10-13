#include <string>
#include <vector>
std::string uint32_to_ip(uint32_t ip)
{
  std::vector<int> address;
    while (ip != 0) {
        address.push_back(ip % 2);
        ip /= 2;
    }
  
    int size = address.size();

    for (int i = 0; i < 32 - size; i++) {
        address.push_back(0);
    }
    reverse(address.begin(), address.end());
    
    std::string result = "";
    int temp = 0;
    int add = 128;
    for (auto x : address) {
        
        temp += add * x;
        add /= 2;

        if (add == 0) {
            add = 128;
            result += std::to_string(temp) + ".";
            temp = 0;
        }
    }

    result.pop_back();

    return result;
}