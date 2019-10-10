#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>
#define mp make_pair
#define pb push_back
#define MAXV 1010

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

vi S;
int V, E, dfs_parent[MAXV], dfs_low[MAXV], dfs_num[MAXV], visited[MAXV];
int ans, counter, flag, ok;

vector<vi> directed(MAXV), undirected(MAXV);

struct no {
    int pai, rank;
};

typedef struct no UJoin;

UJoin pset[MAXV];

int readInt()
{
    bool minus = false;
    int result = 0;
    char ch = getchar_unlocked();
    while (true) {
        if (ch == '-')
            break;
        if (ch >= '0' && ch <= '9')
            break;
        ch = getchar_unlocked();
    }
    if (ch == '-')
        minus = true;
    else
        result = ch - '0';
    while (true) {
        ch = getchar_unlocked();
        if (ch < '0' || ch > '9')
            break;
        result = result * 10 + (ch - '0');
    }
    if (minus)
        return -result;
    else
        return result;
}

void initialize()
{
    for (int i = 0; i < V; ++i) {
        pset[i].pai = i;
        pset[i].rank = visited[i] = 0;
        dfs_parent[i] = dfs_low[i] = dfs_num[i] = 0;
        directed[i].clear();
        undirected[i].clear();
    }
}

void link(int x, int y)
{
    if (pset[x].rank > pset[y].rank)
        pset[y].pai = x;
    else {
        pset[x].pai = y;
        if (pset[x].rank == pset[y].rank)
            pset[y].rank = pset[y].rank + 1;
    }
}

int findSet(int x)
{
    while (pset[x].pai != x)
        x = pset[x].pai;
    return x;
}

void unionSet(int x, int y)
{
    link(findSet(x), findSet(y));
}

bool isSameSet(int x, int y)
{
    return findSet(x) == findSet(y);
}

void tarjan(int u)
{
    dfs_low[u] = dfs_num[u] = counter++;
    S.pb(u);
    visited[u] = true;
    vi::iterator li;
    for (li = directed[u].begin(); li != directed[u].end(); ++li) {
        if (!dfs_num[*li])
            tarjan(*li);
        if (visited[*li])
            dfs_low[u] = min(dfs_low[u], dfs_low[*li]);
    }
    if (dfs_low[u] == dfs_num[u]) {
        int resp = 0;
        while (true) {
            int vertex = S.back();
            S.pop_back();
            resp++;
            if (u == vertex)
                break;
        }
        if (resp == V)
            flag = true;
    }
}

void PointBridge(int u)
{
    vi::iterator i;
    dfs_low[u] = dfs_num[u] = counter++;
    for (i = undirected[u].begin(); i != undirected[u].end(); ++i) {
        if (!dfs_num[*i]) {
            ans++;
            dfs_parent[*i] = u;
            PointBridge(*i);
            if (dfs_low[*i] > dfs_num[u])
                if (isSameSet(u, *i))
                    ok = true;
            dfs_low[u] = min(dfs_low[u], dfs_low[*i]);
        } else if (*i != dfs_parent[u])
            dfs_low[u] = min(dfs_low[u], dfs_num[*i]);
    }
}

int main()
{
    int a, b, t;
    while (scanf("%d %d", &V, &E) != EOF) {
        initialize();
        ans = counter = flag = ok = counter = 0;
        a = readInt();
        b = readInt();
        t = readInt();
        for (int i = 0; i < E - 1; ++i) {
            a = readInt();
            b = readInt();
            t = readInt();
            directed[a - 1].pb(b - 1);
            undirected[a - 1].pb(b - 1);
            undirected[b - 1].pb(a - 1);
            if (t == 2)
                directed[b - 1].pb(a - 1);
            else
                unionSet(b - 1, a - 1);
        }
        tarjan(0);
        if (flag)
            printf("-\n");
        else {
            for (int i = 0; i < V; ++i)
                dfs_low[i] = dfs_num[i] = 0;
            counter = 0;
            PointBridge(0);
            if (ans != V)
                printf("*\n");
            else {
                if (ok)
                    printf("2\n");
                else
                    printf("1\n");
            }
        }
    }
    return 0;
}
