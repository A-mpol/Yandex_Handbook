#include <iostream>
#include <string>

int main() {
    std::string password;
    int upper = 0;
    int lower = 0;
    int digit = 0;
    int other = 0;
    
    std::getline(std::cin, password);
    
    if (password.size() < 8 || password.size() > 14) {
        std::cout << "NO";
        return 0;
    }
    
    for (char symbol : password) {
        if (static_cast<int>(symbol) < 33 || static_cast<int>(symbol) > 126) {
            std::cout << "NO";
            return 0;
        }
        else {
            if ('a' <= symbol && symbol <= 'z') {
                lower = 1;
            }
            else if ('A' <= symbol && symbol <= 'Z') {
                upper = 1;
            }
            else if ('0' <= symbol && symbol <= '9') {
                digit = 1;
            }
            else {
                other = 1;
            }
        }
    }
    
    if (lower + upper + digit + other >= 3) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
    
    return 0;
}
