#include <iostream>
#include <vector>

int main() {
    std::vector<int> results;
    int n = -1;
    while (std::cin >> n && n != 0) {
        int winner = -1;
        int p;
        for (int i = 1; i <= n; i++) {
            std::cin >> p;
            if (p == i)
                winner = p;
        }
        results.push_back(winner);
    }
    for (int i = 1; i <= results.size(); i++) {
        std::cout << "Teste " << i << std::endl << results[i - 1] << std::endl << std::endl;
    }
}