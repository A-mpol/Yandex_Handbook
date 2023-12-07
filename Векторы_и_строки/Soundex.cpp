#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cin >> word;
    
    std::string result;
    result.push_back(word[0]);
    
    for (size_t i = 1; i != word.size(); ++i) {
        if (result.size() == 4) {
            break;
        }
        
        if ((word[i] == 'b' || word[i] == 'f' || word[i] == 'p' || word[i] == 'v') && (result.back() != '1')) {
            result += '1';
        }
        
        if ((word[i] == 'c' || word[i] == 'g' || word[i] == 'j' || word[i] == 'k' || word[i] == 'q'
             || word[i] == 's' || word[i] == 'x' || word[i] == 'z')&& (result.back() != '2')) {
            result += '2';
        }
        
        if ((word[i] == 'd' || word[i] == 't') && (result.back() != '3')) {
            result += '3';
        }
        
        if ((word[i] == 'l') && (result.back() != '4')) {
            result += '4';
        }
        
        if ((word[i] == 'm' || word[i] == 'n') && (result.back() != '5')) {
            result += '5';
        }
        
        if ((word[i] == 'r') && (result.back() != '6')) {
            result += '6';
        }
    }
    
    while (result.size() != 4) {
        result += '0';
    }
    
    std::cout << result;
    
    return 0;
}
