#include <iostream>
#include <vector>

int main() {
    int32_t n;
    int32_t place;
    std::cin >> n;
    
    std::vector<int32_t> info(n);
    
    for (int32_t i = 0; i < n; i++) {
        std::cin >> place;
        info[place - 1] = i + 1;
    }
    
    for (int32_t i = 0; i < n; i++) {
        std::cout << info[i] << " ";
    }
    
    return 0;
}
