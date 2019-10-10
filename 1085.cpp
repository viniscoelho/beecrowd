#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
#define MAXV 4010
#define MAX 256
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<int, int> ii;
typedef pair<int, string> is;
typedef pair<ii, string> iis;

int n, dist[MAXV], ok = 1;
int visited[MAXV][MAX];
vector<list<is>> graph(MAXV);
unordered_map<string, int> bib;
pair<unordered_map<string, int>::iterator, bool> ret;

int dijkstra(int s, int t, list<is>::iterator son)
{
    if (!graph[s].size())
        return INF;
    for (int i = 0; i < bib.size(); ++i)
        dist[i] = INF;
    visited[s][son->second[0]] = ok;
    priority_queue<iis> pq;
    pq.push(mp(mp(-son->second.size(), son->first), son->second));

    list<is>::iterator it, li;

    while (!pq.empty()) {
        iis atual = pq.top();
        pq.pop();
        int custo = -atual.first.first;
        int v = atual.first.second;
        if (v == t)
            return custo;
        if (visited[v][atual.second[0]] == ok)
            continue;
        visited[v][atual.second[0]] = ok;
        int ant = -1;
        for (it = graph[v].begin(); it != graph[v].end(); ++it) {
            if (atual.second[0] == it->second[0])
                continue;
            if (dist[it->first] > custo + int(it->second.size())) {
                dist[it->first] = custo + int(it->second.size());
                pq.push(mp(mp(-dist[it->first], it->first), it->second));
            } else if (ant == it->first)
                pq.push(mp(mp(-(custo + int(it->second.size())), it->first), it->second));
            ant = it->first;
        }
    }
    return INF;
}

int main()
{
    ios::sync_with_stdio(false);
    int de, para;
    string from, to, cost, source, destiny;
    while (cin >> n && n) {
        int t = 0;
        bib.clear();
        cin >> source >> destiny;
        bib.insert(mp(source, t++));
        bib.insert(mp(destiny, t++));
        for (int i = 0; i < n; ++i) {
            cin >> from >> to >> cost;
            ret = bib.insert(mp(from, t));
            if (!ret.second)
                de = bib[from];
            else {
                de = bib[from];
                t++;
            }
            ret = bib.insert(mp(to, t));
            if (!ret.second)
                para = bib[to];
            else {
                para = bib[to];
                t++;
            }
            graph[de].pb(mp(para, cost));
            graph[para].pb(mp(de, cost));
        }
        list<is>::iterator it;
        int resp = INF;
        for (it = graph[0].begin(); it != graph[0].end(); ++it) {
            resp = min(resp, dijkstra(0, 1, it));
            ok++;
        }
        if (resp < INF)
            cout << resp << "\n";
        else
            cout << "impossivel\n";
        for (int i = 0; i < t; ++i)
            graph[i].clear();
    }
    return 0;
}
