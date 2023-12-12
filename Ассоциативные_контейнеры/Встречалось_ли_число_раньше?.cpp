#include <iostream>
#include <unordered_set>

int main( void ) {
    std::unordered_set<int> numbers;
    int num;
    
    while (std::cin >> num) {
        auto [iter, has_been_inserted] = numbers.insert(num);
        if (!has_been_inserted) {
            std::cout << "YES" << "\n";
        }
        else {
            std::cout << "NO" << "\n";
        }
    }
    
    return 0;
}

