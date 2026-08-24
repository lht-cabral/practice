#include <iostream>

int main() {
    int n, k;
    std::cin >> n;
    std::cin >> k;

    int participants[n];
    for(int i = 0; i < n; i++)
        std::cin >> participants[i];

    int score = participants[k - 1];
    int winners = 0;
    for(int i = 0; i < n; i++) {
        if(participants[i] >= score && participants[i] != 0)
            winners++;
    }

    std::cout << winners << std::endl;

    return 0;
}