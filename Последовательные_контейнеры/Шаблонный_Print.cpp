#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <deque>
#include <list>


template <typename T>
void Print(const T& info, std::string delimeter) {
    for (auto iter = info.begin(); iter != info.end(); ++iter) {
        if (std::next(iter) == info.end()) {
            std::cout << *iter;
        }
        else {
            std::cout << *iter << delimeter;
        }
    }
    std::cout << "\n";
}
