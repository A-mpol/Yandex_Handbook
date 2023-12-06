#include <iostream>

int main( void ) {
    int32_t a;
    int32_t b;
    int32_t c;
    std::cin >> a >> b >> c;
    
    if (a >= b + c || b >= a + c || c >= a + b || a <= 0 || b <= 0 || c <= 0) {
        std::cout << "UNDEFINED";
    }
    else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
}
