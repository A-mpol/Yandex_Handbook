#include <iostream>
#include <string>
#include <map>
#include <set>

int main( void ) {
    std::map<char, int> letters;
    std::string word;
    int cou = 0;
    
    while (std::cin >> word) {
        std::set<char> check(word.begin(), word.end());
        for (char symb : check) {
            ++letters[symb];
        }
        ++cou;
    }
    
    for (auto [key, value] : letters) {
        if (value == cou) {
            std::cout << key;
        }
    }
    
    return 0;
}

