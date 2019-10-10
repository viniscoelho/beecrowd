#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define mp make_pair
#define pb push_back
#define MAXV 4010

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int64;

const int INF = 0x3f3f3f3f;
int dist[MAXV], visited[MAXV];

int v, a, vis = 1;

map<string, int> links;
vector<list<ii>> grafo(MAXV);

int main()
{
    ios::sync_with_stdio(false);
    cin >> v >> a;

    memset(dist, INF, sizeof(dist));

    string from, to;
    int c = 0;
    int entrada, saida, queijo;
    for (int i = 0; i < a; i++) {
        cin >> from >> to;
        int de, para;
        if (links.count(from))
            de = links[from];
        else {
            de = c;
            links[from] = c++;
        }
        if (from == "Entrada")
            entrada = de;
        else if (from == "Saida")
            saida = de;
        else if (from == "*")
            queijo = de;

        if (links.count(to))
            para = links[to];
        else {
            para = c;
            links[to] = c++;
        }
        if (to == "Entrada")
            entrada = para;
        else if (to == "Saida")
            saida = para;
        else if (to == "*")
            queijo = para;
        //cout << de << " " << para << endl;

        grafo[de].pb(mp(para, 1));
        grafo[para].pb(mp(de, 1));
    }
    //cout << entrada << " " << saida << " " << queijo << endl;

    memset(dist, INF, sizeof(dist));
    priority_queue<ii> pq;
    pq.push(mp(0, entrada));
    dist[entrada] = 0;

    ii atual;
    list<ii>::iterator it;

    while (!pq.empty()) {
        atual = pq.top();
        pq.pop();
        int custo = -atual.first;
        int n = atual.second;
        if (visited[n] == vis)
            continue;
        visited[n] = vis;
        for (it = grafo[n].begin(); it != grafo[n].end(); ++it) {
            //cout << custo + it->second << " " << n << endl;
            if (dist[it->first] > custo + it->second) {
                dist[it->first] = custo + it->second;
                pq.push(mp(-dist[it->first], it->first));
            }
        }
    }
    vis++;

    int resp = dist[queijo];
    //cout << resp << endl;

    memset(dist, INF, sizeof(dist));
    pq.push(mp(0, queijo));
    dist[queijo] = 0;

    while (!pq.empty()) {
        atual = pq.top();
        pq.pop();
        int custo = -atual.first;
        int n = atual.second;
        if (visited[n] == vis)
            continue;
        visited[n] = vis;
        for (it = grafo[n].begin(); it != grafo[n].end(); ++it) {
            if (dist[it->first] > custo + it->second) {
                dist[it->first] = custo + it->second;
                pq.push(mp(-dist[it->first], it->first));
            }
        }
    }
    resp += dist[saida];

    cout << resp << endl;
}