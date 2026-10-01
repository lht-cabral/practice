#include <bits/stdc++.h>

using namespace std;

#define _ ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _ 

    int n, m;
    cin >> n >> m;

    vector<int> soma_colunas(m, 0);

    int max_soma_linhas = 0;

    for(int i = 0; i < n; i++){
        int soma_linhas_atual = 0;
        for(int j = 0; j < m; j++){
            int valor;
            cin >> valor;

            soma_linhas_atual += valor;
            soma_colunas[j] += valor;
        }
        if(soma_linhas_atual > max_soma_linhas) max_soma_linhas = soma_linhas_atual;
    }

    int max_soma_colunas = 0;

    for(int i = 0; i < m; i++) {
        if(soma_colunas[i] > max_soma_colunas) max_soma_colunas = soma_colunas[i];
    }

    cout << max(max_soma_colunas, max_soma_linhas) << '\n';

    return 0;
}