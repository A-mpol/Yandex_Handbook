#include <iostream>

int main( void ) {
    int16_t number, year;
    std::cin >> number >> year;
    
    if (number == 2) {
        if (year % 400 == 0) {
            std::cout << 29;
        }
        
        else if (year % 100 == 0) {
            std::cout << 28;
        }
        
        else if (year % 4 == 0) {
            std::cout << 29;
        }
        
        else {
            std::cout << 28;
        }
    }
    
    else if ((number < 8 && number % 2 == 1) || (number >= 8 && number % 2 == 0)) {
        std::cout << 31;
    }
    
    else {
        std::cout << 30;
    }
    
    return 0;
}
