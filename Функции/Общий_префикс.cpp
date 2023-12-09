#include <iostream>
#include <vector>
#include <string>


std::string CommonPrefix(const std::vector<std::string>& words) {
    std::string result = "";
    
    if (words.size() == 0) {
        return result;
    }
    
    for (size_t i = 0; i != words[0].size(); ++i) {
        for (size_t j = 0; j != words.size(); ++j) {
            if (i == words[j].size() || words[0][i] != words[j][i]) {
                return result;
            }
        }
        result += words[0][i];
    }
    
    return result;
}
