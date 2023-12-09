#include <iostream>
#include <vector>
#include <string>


std::vector<std::string> Split(const std::string& str, char delimiter) {
    std::vector<std::string> result;
    std::string tmp = "";
    
    if (str.size() == 0) {
        return result;
    }
    
    for (size_t i = 0; i != str.size(); ++i) {
        if (str[i] == delimiter) {
            result.push_back(tmp);
            tmp = "";
        }
        else {
            tmp += str[i];
        }
    }
    
    if (tmp.size() != 0 || str[str.size() - 1] == delimiter) {
        result.push_back(tmp);
    }
    
    return result;
}
