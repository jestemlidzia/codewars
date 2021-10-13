class PrimeDecomp
{
public:
    static std::string factors(int lst){
    
        int pow_count = 0;
        int i = 2;
        std::string tmp = "";

        while (lst != 1) {

            while (lst%i == 0) {
                pow_count++;
                lst = lst / i;
            }

            if (pow_count != 0) {
                if (pow_count != 1) tmp += "(" + std::to_string(i) + "**" + std::to_string(pow_count) + ")";
                else tmp += "(" + std::to_string(i) + ")";
                pow_count = 0;
            }

            i++;
        }
        return tmp;
    };
};