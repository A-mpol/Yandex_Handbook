#include <iostream>

int main( void ) {
    int16_t year;
    std::cin >> year;
    
    if (year % 400 == 0) {
        std::cout << "YES";
    }
    
    else if (year % 100 == 0) {
        std::cout << "NO";
    }
    
    else if (year % 4 == 0) {
        std::cout << "YES";
    }
    
    else {
        std::cout << "NO";
    }
    
    return 0;
}
