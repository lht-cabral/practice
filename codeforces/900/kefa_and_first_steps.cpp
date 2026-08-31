#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);
    for(int i = 0; i < n; i++)
        std::cin >> numbers[i];

    int counter = 1;
    int max = 1;

    for(int i = 1; i < n; i++) {
        if(numbers[i] >= numbers[i - 1]) {
            counter++;
            if(counter > max)
                max = counter;
        }
        else counter = 1;
    }

    std::cout << max << "\n";

    return 0;
}