#include <iostream>

int main() {
    long long int n, k;
    std::cin >> n;
    std::cin >> k;

    if(n % 2 == 1 && k <= (n/2) + 1) {
        std::cout << k + (k - 1) << "\n";
    }
    else if(n % 2 == 1 && k > (n/2) + 1) {
        std::cout << (k - 1 - (n/2)) * 2;
    }
    else if (n % 2 == 0 && k <= n/2) {
        std::cout << k + (k - 1) << "\n";
    }
    else {
        std::cout << (k - (n/2)) * 2;
    }

    return 0;
}