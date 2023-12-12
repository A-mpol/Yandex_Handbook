#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <tuple>
#include <algorithm>
    

int main( void ) {
    int n;
    int m;
    std::string word;
    std::unordered_map<std::string, int> data;
    std::cin >> n >> m;
    
    for (int i = 0; i != n; ++i) {
        std::cin >> word;
        for (size_t j = m; j <= word.size(); ++j) {
            ++data[word.substr(j - m, m)];
        }
    }
    
    std::vector<std::pair<std::string, int>> forSortData(data.begin(), data.end());
    std::sort(forSortData.begin(), forSortData.end(),
              [](const auto& lhs, const auto& rhs) {return std::tie(lhs.second, rhs.first) > std::tie(rhs.second, lhs.first);});
    
    for (const auto& [key, value] : forSortData) {
        std::cout << key << " - " << value << "\n";
    }
    return 0;
}

