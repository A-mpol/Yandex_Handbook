#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    double sign = 1;
    double cou = 0.0;
    
    for (int i = 1; i <= n; ++i) {
        cou += sign / i;
        sign = -sign;
    }
    
    std::cout << cou << "\n";
    
    return 0;
}
