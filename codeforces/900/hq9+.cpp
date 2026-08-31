#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string text;
    std::cin >> text;

    std::vector<char> letters = {'H', 'Q', '9'};

    for(int i = 0; i < 3; i++) {
        size_t position = text.find(letters[i]);
        if(position != std::string::npos) {
            std::cout << "YES" << "\n";

            return 0;
        }
    }

    std::cout << "NO" << "\n";

    return 0;
}