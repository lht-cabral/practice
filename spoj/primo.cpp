#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    if(N == 1) {
        cout << "nao" << "\n";
        return 0;
    }

    if(N % 2 == 0) {
        cout << "nao" << "\n";
        return 0;
    }

    for(int i = 3; i <= N / 2; i += 2) {
        if(N % i == 0) {
            cout << "nao" << "\n";
            return 0;
        }
    }

    cout << "sim" << "\n";
    return 0;
}