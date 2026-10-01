#include <bits/stdc++.h>

using namespace std;

#define _ ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _ 

    set<string> tesouro;

    string joias;
    while(cin >> joias){
        tesouro.insert(joias);
    }

    cout << tesouro.size() << '\n';

    return 0;
}