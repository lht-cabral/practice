#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    n = n * 3;

    int team[n * 3];
    for(int i = 0; i < n; i++)
        std::cin >> team[i];

    int solutions = 0;
    for(int i = 0; i < n; i += 3) {
        int sum = team[i] + team[i + 1] + team[i + 2];
        if(sum >= 2)
            solutions++;
    }

    std::cout << solutions << std::endl;

    return 0;
}