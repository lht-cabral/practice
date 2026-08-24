#include <iostream>
#include <string>

int main() {
    int n = 0;
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::string word;
        std::cin >> word;

        if(word.length() <= 10)
            std::cout << word << '\n';
        else
            std::cout << word.front() << word.length() - 2 << word.back() << '\n';
    }
    
    return 0;
}