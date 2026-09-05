#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;

        if(a < b)
            cout << b - a << "\n";
        else if (a == b)
            cout << 0 << "\n";
        else {
            if(a % b == 0) {
                cout << 0 << "\n";
                continue;
            }
            else
                cout << (b *= (a / b) + 1) - a << "\n";
        }
    }

    return 0;
}