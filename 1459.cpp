/*
 Resolucao:
 Verifica se uma paisagem ou parte dela esta dentro do intervalo
 de outra paisagem
 Contabiliza o minimo de fotos a serem tiradas
 */
#include <algorithm>
#include <iostream>
#include <vector>
#define mp make_pair

using namespace std;

typedef pair<int, int> ii;

int main()
{
    ios::sync_with_stdio(false);
    int a;
    while (cin >> a) {
        int x1, x2;
        vector<ii> atrac;
        vector<ii>::iterator it;
        for (int i = 0; i < a; ++i) {
            cin >> x1 >> x2;
            atrac.push_back(mp(x2, x1));
        }
        sort(atrac.begin(), atrac.end());
        it = atrac.begin();
        int sum = 0;
        while (it != atrac.end()) {
            sum++;
            int n2 = it->first;
            while ((it->second) <= n2 && it != atrac.end())
                it++;
        }
        cout << sum << "\n";
    }
    return 0;
}