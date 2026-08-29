#include <iostream>
#include <string>

int main() {
    std::string team;
    std::cin >> team;

    int counter = 1;
    for(int i = 1; i < team.length(); i++) {
        if(team[i] == team[i - 1])
            counter++;
        else
            counter = 1;

        if(counter == 7) {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }

    std::cout << "NO" << std::endl;

    return 0;
}