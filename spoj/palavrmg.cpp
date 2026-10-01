#include <bits/stdc++.h>

using namespace std;

#define _ ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _ 

    int p;
    cin >> p;

    for(int i = 0; i < p; i++){
        string str;
        cin >> str;

        string nstr = str;

        bool o = true;

        for(int j = 0; j < str.size(); j++) nstr[j] = tolower(str[j]) - 'a';
        for(int j = 0; j < str.size() - 1; j++){
            if(nstr[j] < nstr[j + 1]) continue;
            else{
                o = false;
                break;
            }
        }
        if(o == true) cout << str << ": " << 'O' << '\n';
        else cout << str << ": " << 'N' << '\n';
    }

    return 0;
}