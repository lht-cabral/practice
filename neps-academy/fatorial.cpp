#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int fatorial = 1;
    for(int i = N; i > 0; i--) {
        fatorial *= i;
    }

    cout << fatorial << "\n";
}