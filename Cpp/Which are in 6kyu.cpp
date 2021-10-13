class WhichAreIn
{

  public:
  static std::vector<std::string> inArray(std::vector<std::string> &array1, std::vector<std::string> &array2) {

        std::vector<std::string> results;

        for (int i = 0; i < array1.size(); i++) {
            for (int j = 0; j < array2.size(); j++) {
                int position = array2[j].find(array1[i]);
                if (position != std::string::npos) {
                    results.push_back(array1[i]);
                    break;
                }
            }
        }
        sort(results.begin(),results.end());
        return results;
    };
};