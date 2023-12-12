#include <iostream>
#include <string>
#include <set>
#include <map>
    

int main( void ) {
    std::map<int, std::set<std::string>> data;
    
    int n;
    std::cin >> n;
    
    std::string word;
    int num;
    
    for (int i = 0; i != n; ++i) {
        std::cin >> word >> num;
        data[num].insert(word);
    }
    
    for (const auto& [key, set_value] : data) {
        std::cout << key;
        for (const auto& value : set_value) {
            std::cout << " " << value;
        }
        std::cout << "\n";
    }
    return 0;
}

