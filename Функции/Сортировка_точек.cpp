#include <iostream>
#include <vector>
#include <algorithm>


bool Compare(std::vector<int>& lhs, std::vector<int>& rhs) {
    return (lhs[0] * lhs[0] + lhs[1] * lhs[1]) < (rhs[0] * rhs[0] + rhs[1] * rhs[1]);
}


int main() {
    int n;
    int x;
    int y;
    std::cin >> n;
    std::vector<std::vector<int>> data(n);
    
    for (int i = 0; i != n; ++i) {
        std::cin >> x >> y;
        data[i] = {x, y};
    }
    
    std::sort(data.begin(), data.end(), Compare);
    
    for (int i = 0; i != n; ++i) {
        std::cout << data[i][0] << " " << data[i][1] << "\n";
    }
    
    return 0;
}
