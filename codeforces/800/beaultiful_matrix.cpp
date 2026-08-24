#include <iostream>
#include <cmath>

int main() {
    int matrix[5][5];
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            std::cin >> matrix[i][j];

    int ii = 0;
    int ij = 0;
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            if(matrix[i][j] == 1) {
                ii = i;
                ij = j;
            }

    int moves = 0;
    moves += std::abs(ii - 2);
    moves += std::abs(ij - 2);

    std::cout << moves << std::endl;

    return 0;
}