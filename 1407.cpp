/*
	Resolucao:
		Contar o numero de vezes que o numero foi sorteado.
		Os menores ou menor numeros sorteados sao impressos
*/

#include <algorithm>
#include <iostream>
#include <queue>
#define mp make_pair

using namespace std;

int loteria[110];
int n, c, k, p, MAX;

typedef pair<int, int> ii;

int main()
{
    ios::sync_with_stdio(false);
    bool flag = false;
    while (cin >> n >> c >> k && n + c + k) {
        if (flag)
            for (int i = 0; i < k; ++i)
                loteria[i] = 0;
        priority_queue<ii> pq;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < c; ++j) {
                cin >> p;
                loteria[p - 1]++;
            }
        for (int i = 0; i < k; ++i)
            pq.push(mp(-(loteria[i]), -(i + 1)));
        MAX = -pq.top().first;
        int cont = 0;
        while (-pq.top().first == MAX && !pq.empty()) {
            if (cont == 0)
                cout << -pq.top().second;
            else
                cout << " " << -pq.top().second;
            pq.pop();
            cont++;
        }
        cout << "\n";
        flag = true;
    }
    return 0;
}