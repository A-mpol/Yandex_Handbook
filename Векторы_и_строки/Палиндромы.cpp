#include <iostream>
#include <string>

int main() {
    std::string str;
    getline(std::cin, str);
    
    int16_t i = 0;
    int16_t j = str.size() - 1;
    
    while (i <= j) {
        if (str[i] == ' ') {
            ++i;
        }
        else if (str[j] == ' ') {
            --j;
        }
        else if (str[i] != str[j]) {
            std::cout << "NO";
            return 0;
        }
        else {
            ++i;
            --j;
        }
    }
    
    std::cout << "YES";
    
    return 0;
}
