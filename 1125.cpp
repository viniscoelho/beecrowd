#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <vector>
#define mp make_pair
#define pb push_back

using namespace std;

typedef pair<int, int> ii;

int main()
{
    ios::sync_with_stdio(false);
    int g, p, s, l, x;
    for (cin >> g >> p; g != 0 && p != 0; cin >> g >> p) {
        vector<priority_queue<ii>> corridas;
        for (int k = 0; k < g; k++) {
            priority_queue<ii> pq;
            for (int i = 0; i < p; ++i) {
                cin >> x;
                pq.push(mp(-x, i));
            }
            corridas.pb(pq);
        }
        cin >> s;
        for (int i = 0; i < s; ++i) {
            cin >> l;
            vector<int> pontos;
            priority_queue<ii> pq, win;
            vector<vector<int>> pilotos(p);
            for (int k = 0; k < p; ++k) {
                pilotos[k].resize(2);
                pilotos[k][0] = 0;
                pilotos[k][1] = -(k + 1);
            }
            for (int k = 0; k < l; ++k) {
                cin >> x;
                pontos.pb(x);
            }
            for (int k = 0; k < g; ++k) {
                pq = corridas[k];
                for (int j = 0; j < l; ++j) {
                    int b = pq.top().second;
                    pq.pop();
                    pilotos[b][0] += pontos[j];
                }
            }
            sort(pilotos.begin(), pilotos.end());
            int k = p - 1;
            while (k >= 0 && pilotos[k][0] == pilotos[p - 1][0]) {
                if (k == p - 1)
                    cout << -pilotos[k][1];
                else
                    cout << " " << -pilotos[k][1];
                k--;
            }
            cout << "\n";
        }
    }
    return 0;
}
