#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 110
#define pb push_back
#define mp make_pair

using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-9;
const double INF = 1e50;

struct pt;
typedef pair<pt, pt> line;
typedef vector<pt> polygon;
typedef pair<pt, int> ddi;
typedef pair<double, double> dd;

int cmp(double a, double b = 0.0)
{
    if (fabs(a - b) < EPS)
        return 0;
    return a > b ? 1 : -1;
}

vector<list<int>> graph(1010);
int visited[1010], v = 1;
int resp = 0;

void DFS(int u)
{
    list<int>::iterator it;
    for (it = graph[u].begin(); it != graph[u].end(); ++it) {
        if (visited[*it] != v) {
            resp++;
            visited[*it] = v;
            DFS(*it);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    string r;
    while (cin >> n && n) {
        resp = 0;
        REP(i, 1010)
        graph[i].clear();
        REP(i, n)
        {
            cin >> r;
            int par[2], k = 0;
            FOR(j, 1, r.size() - 1)
            {
                string a;
                while (isdigit(r[j]))
                    a += r[j++];
                stringstream buffer(a);
                buffer >> par[k++];
            }
            graph[par[0] - 1].pb(par[1] - 1);
            graph[par[1] - 1].pb(par[0] - 1);
        }
        DFS(0);
        cout << ((resp == 0) ? resp + 1 : resp) << "\n";
        v++;
    }

    return 0;
}