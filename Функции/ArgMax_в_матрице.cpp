#include <iostream>
#include <vector>
#include <utility>


std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix) {
    std::pair<size_t, size_t> result = {0, 0};
    for (size_t i = 0; i != matrix.size(); ++i) {
        for (size_t j = 0; j != matrix[0].size(); ++j) {
            if (matrix[i][j] > matrix[result.first][result.second]) {
                result.first = i;
                result.second = j;
            }
        }
    }
    
    return result;
}
