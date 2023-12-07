#include <iostream>
#include <vector>

int main() {
    int16_t m;
    int16_t n;
    int16_t k;
    int16_t x;
    int16_t y;
    std::cin >> m >> n >> k;
    
    std::vector<std::vector<int16_t>> matrix(m, std::vector<int16_t>(n));
    
    for (int16_t i = 0; i != m; ++i) {
        for (int16_t j = 0; j != n; ++j) {
            matrix[i][j] = 0;
        }
    }
    
    for (int16_t i = 0; i != k; ++i) {
        std::cin >> x >> y;
        matrix[x - 1][y - 1] = -1;
        if (x - 2 >= 0 && y - 2 >= 0) {
            if (matrix[x - 2][y - 2] != -1) {
                matrix[x - 2][y - 2] += 1;
            }
        }
        if (x - 2 >= 0) {
            if (matrix[x - 2][y - 1] != -1) {
                matrix[x - 2][y - 1] += 1;
            }
        }
        if (x - 2 >= 0 && y < n) {
            if (matrix[x - 2][y] != -1) {
                matrix[x - 2][y] += 1;
            }
        }
        if (y < n) {
            if (matrix[x - 1][y] != -1) {
                matrix[x - 1][y] += 1;
            }
        }
        if (x < m && y < n) {
            if (matrix[x][y] != -1) {
                matrix[x][y] += 1;
            }
        }
        if (x < m) {
            if (matrix[x][y - 1] != -1) {
                matrix[x][y - 1] += 1;
            }
        }
        if (x < m && y - 2 >= 0) {
            if (matrix[x][y - 2] != -1) {
                matrix[x][y - 2] += 1;
            }
        }
        if (y - 2 >= 0) {
            if (matrix[x - 1][y - 2] != -1) {
                matrix[x - 1][y - 2] += 1;
            }
        }
    }
    
    for (int16_t i = 0; i != m; ++i) {
        for (int16_t j = 0; j != n; ++j) {
            if (matrix[i][j] == -1) {
                std::cout << '*' << " ";
            }
            else {
                std::cout << matrix[i][j] << " ";
            }
        }
        std::cout << "\n";
    }
    
    return 0;
}
