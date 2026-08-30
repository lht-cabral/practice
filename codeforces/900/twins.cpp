#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    int total = 0;
    std::vector<int> coins(n);
    for(int i = 0; i < n; i++) {
        std::cin >> coins[i];
        total += coins[i];
    }

    std::sort(coins.begin(), coins.end());

    int parcial = 0;
    int counter = 0;
    for(int i = n - 1; i > -1; i--) {
        parcial += coins[i];
        counter++;

        if(parcial > total / 2) {
            std::cout << counter << "\n";
            return 0;
        }
    }

    std::cout << counter << "\n";

    return 0;
}