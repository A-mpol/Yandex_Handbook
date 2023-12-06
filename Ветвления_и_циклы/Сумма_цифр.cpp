#include <iostream>

int main( void ) {
    int64_t num;
    int64_t cou = 0;
    std::cin >> num;
    
    while (num != 0) {
        cou += num % 10;
        num /= 10;
    }
    
    std::cout << cou;
    
    return 0;
}
