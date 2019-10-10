/*
	Resolucao:
		Verificar qual a maior cadeia alimentar pode ser
		obtida. Basta aplicar o algoritmo de tarjan que retornara
		a maior componente fortemente conexa
*/

#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define MAXV 300

using namespace std;

typedef vector<int> vi;

vector<list<int>> graph(MAXV);
vi S;
int visited[MAXV], dfs_low[MAXV], dfs_num[MAXV];
int counter, m, n;

priority_queue<int> pq;
int resp = 0;

void tarjan(int u)
{
    dfs_low[u] = dfs_num[u] = counter++;
    S.pb(u);
    visited[u] = 1;
    list<int>::iterator i;
    for (i = graph[u].begin(); i != graph[u].end(); ++i) {
        if (!dfs_num[*i])
            tarjan(*i);
        if (visited[*i])
            dfs_low[u] = min(dfs_low[u], dfs_low[*i]);
    }
    if (dfs_low[u] == dfs_num[u]) {
        while (1) {
            int vertex = S.back();
            S.pop_back();
            visited[vertex] = 0;
            pq.push(-vertex);
            if (u == vertex)
                break;
        }
        resp++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    char a, b;
    int q, t = 1;
    cin >> q;
    while (q--) {
        cout << "Case #" << t++ << ":\n";
        cin >> m >> n;
        for (int i = 97; i < 97 + m; ++i) {
            dfs_num[i] = dfs_low[i] = visited[i] = 0;
            graph[i].clear();
        }
        for (int i = 0; i < n; ++i) {
            cin >> a >> b;
            graph[int(a)].pb(int(b));
            graph[int(b)].pb(int(a));
        }
        counter = 0;
        for (int k = 97; k < 97 + m; k++) {
            if (!dfs_num[k]) {
                tarjan(k);
                while (!pq.empty()) {
                    cout << char(-pq.top()) << ",";
                    pq.pop();
                }
                cout << "\n";
            }
        }
        cout << resp << " connected components\n\n";
        resp = 0;
    }
    return 0;
}
