#include <iostream>

int main( void ) {
    int16_t n;
    int16_t k;
    int16_t count = 1;
    std::cin >> n >> k;
    
    for (int16_t i = 1; i < k + n; i++) {
        if (i < n) {
            std::cout << "   ";
        }
        else {
            if (count < 10) {
                std::cout << " ";
            }
            std::cout << count;
            if (i % 7 != 0) {
                std::cout << " ";
            }
            count++;
        }
        
        if (i % 7 == 0) {
            std::cout << "\n";
        }
    }
    
    return 0;
}
