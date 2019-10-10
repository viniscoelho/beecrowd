/*
	Resolucao:
		Dados os numeros, testa se e possivel gerar todos os numeros do intervalo
		Se o numero do conjunto for igual ao de numeros a serem obtidos, e possivel
		Caso contrario, nao e possivel
*/

#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define MAX 220

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef unsigned long long int64;

int n, b, x;

const int INF = 0x3f3f3f3f;

int main()
{
    ios::sync_with_stdio(false);
    while (cin >> n >> b && n + b) {
        int maior = -1;
        vi globo;
        unordered_set<int> ball;
        for (int i = 0; i < b; ++i) {
            cin >> x;
            globo.pb(x);
            maior = max(maior, x);
        }
        for (int i = 0; i < globo.size(); i++)
            for (int j = i; j < globo.size(); j++)
                ball.insert(abs(globo[i] - globo[j]));
        if (ball.size() == n + 1)
            cout << "Y\n";
        else
            cout << "N\n";
    }
    return 0;
}
