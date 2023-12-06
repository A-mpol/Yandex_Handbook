#include <iostream>

int main( void ) {
    int32_t x1;
    int32_t y1;
    int32_t x2;
    int32_t y2;
    
    std::cin >> x1 >> y1 >> x2 >> y2;
    
    if (x1 == x2 || y1 == y2 || abs(x2 - x1) == abs(y2 - y1)) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
    
    return 0;
}
