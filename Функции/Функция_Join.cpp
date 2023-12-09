#include <iostream>
#include <vector>
#include <string>


std::string Join(const std::vector<std::string>& tokens, char delimiter) {
    if (tokens.size() == 0) {
        return "";
    }
    
    if (tokens.size() == 1) {
        return tokens[0];
    }
    
    std::string result = tokens[0];
    for (size_t i = 1; i != tokens.size(); ++i) {
        result += delimiter;
        result += tokens[i];
    }
    
    return result;
}
