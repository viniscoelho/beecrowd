#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 110000
#define pb push_back
#define mp make_pair

using namespace std;

typedef long long int64;

vector<list<int>> graph(MAX);
int visited[MAX], v = 1;
int V, E, counter = 0;

void RunDFS(int u, int blank)
{
    visited[u] = v;
    counter++;
    list<int>::iterator it;
    for (it = graph[u].begin(); it != graph[u].end(); it++) {
        if (visited[*it] != v) {
            visited[*it] = v;
            REP(i, blank)
            printf(" ");
            printf("%d-%d pathR(G,%d)\n", u, *it, *it);
            RunDFS(*it, blank + 2);
        } else {
            REP(i, blank)
            printf(" ");
            printf("%d-%d\n", u, *it);
        }
    }
}

int main()
{
    int a, b, t;
    scanf("%d", &t);
    REP(i, t)
    {
        if (i)
            printf("\n");
        counter = 0;
        scanf("%d %d", &V, &E);
        printf("Caso %d:\n", i + 1);
        REP(j, V)
        graph[j].clear();
        REP(j, E)
        {
            scanf("%d %d", &a, &b);
            graph[a].pb(b);
        }
        REP(j, V)
        graph[j].sort();
        REP(j, V)
        {
            if (visited[j] == v)
                continue;
            else {
                RunDFS(j, 2);
                if (graph[j].size() && counter != V)
                    printf("\n");
            }
        }
        v++;
    }
    return 0;
}