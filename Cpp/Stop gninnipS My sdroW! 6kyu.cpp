std::string spinWords(const std::string &str)
{
  std::vector<std::string> vec;

    std::string temp = "";
    for (auto x : (str + " "))
    {
        if (x == ' ')
        {
            if(temp.size() >= 5) reverse(temp.begin(), temp.end());
            vec.push_back(temp);
            temp = "";
        }
        else temp += x;
    }

    std::string out = "";
    for (auto i : vec) out += i + " ";

    const auto pos = out.find_last_of(" ");
    out = out.substr(0, pos);

  return out;
}// spinWords