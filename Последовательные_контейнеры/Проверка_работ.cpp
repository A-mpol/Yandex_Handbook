#include <iostream>
#include <string>
#include <deque>


int main() {
    int32_t n;
    int32_t m;
    int32_t number;
    std::cin >> n;
    
    std::string surname;
    std::string action;
    std::deque<std::string> info;
    
    for (int32_t i = 0; i != n; ++i) {
        std::cin >> surname >> action;
        
        if (action == "top") {
            info.push_front(surname);
        }
        
        else if (action == "bottom") {
            info.push_back(surname);
        }
    }
    
    std::cin >> m;
    for (int32_t i = 0; i != m; ++i) {
        std::cin >> number;
        std::cout << info[number - 1] << "\n";
    }
    
    return 0;
}
