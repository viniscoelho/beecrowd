#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#define mp make_pair
#define pb push_back
#define MAXV 100100

using namespace std;

typedef vector<int> vi;
typedef pair<int, string> is;
typedef unsigned long long int64;

struct node
{
    int64 to, cost;
    node ( int64 to = 0, int64 cost = 0 ) : to(to), cost(cost) {}
};

vector< vector<node> > graph;
 
int nodedad[MAXV], treesize[MAXV], chain[MAXV], chainleader[MAXV];
int cchain;
int64 acc[MAXV];

int readInt ()
{
    bool minus = false;
    int result = 0;
    char ch = getchar_unlocked();
    while (true)
    {
        if (ch == '-') break;
        if (ch >= '0' && ch <= '9') break;
        ch = getchar_unlocked();
    }
    if (ch == '-') minus = true; else result = ch-'0';
    while (true)
    {
        ch = getchar_unlocked();
        if (ch < '0' || ch > '9') break;
        result = result*10 + (ch - '0');
    }
    if (minus) return -result;
    else return result;
}

void BFS()
{
    queue<node> bfs;
    bfs.push( node(1, 0) );
    while ( !bfs.empty() )
    {
        node atual = bfs.front();
        bfs.pop();
        acc[atual.to-1] = atual.cost;
        int tam = graph[atual.to].size();
        for ( int i = 0; i < tam; ++i )
        {
            int dest = graph[atual.to][i].to;
            bfs.push( node(dest, atual.cost + graph[atual.to][i].cost) );
        }
    }
}

void explore ( int x, int dad )
{
    if ( nodedad[x] != -1 ) return;
    nodedad[x] = dad;
    treesize[x] = 1;
    int tam = graph[x].size();
    for ( int i = 0; i < tam; ++i )
    {
        if ( graph[x][i].to != dad )
        {
            explore( graph[x][i].to, x );
            treesize[x] += treesize[graph[x][i].to];
        }
    }
}

void heavy_light ( int x, int dad, int k, int p )
{
    if ( p == 0 )
    {
        k = cchain++;
        chainleader[k] = x;
    }
    chain[x] = k;
    int mx = -1;
    int tam = graph[x].size();
    for ( int i = 0; i < tam; ++i )
        if ( graph[x][i].to != dad && ( mx == -1 || treesize[graph[x][i].to] > treesize[graph[x][mx].to] ) ) mx = i;
    if ( mx != -1 ) heavy_light( graph[x][mx].to, x, k, p+1 );
    for ( int i = 0; i < graph[x].size(); ++i )
        if ( graph[x][i].to != dad && i != mx ) heavy_light( graph[x][i].to, x, -1, 0 );
}
 
int lca ( int a, int b )
{
    while ( chain[a] != chain[b] )
    {
        if ( treesize[chainleader[chain[a]]] >= treesize[chainleader[chain[b]]] ) b = nodedad[chainleader[chain[b]]];
        else a = nodedad[chainleader[chain[a]]];
    }
    if ( treesize[a] < treesize[b] ) return b;
    return a;
}

int main()
{
    int de, para, custo, m, n;
    while ( (m = readInt()) && m )
    {
        graph.resize(m+1);
        for ( int i = 0; i <= m; ++i )
        {
            nodedad[i] = nodedad[i+1] = -1;
            acc[i] = chain[i] = 0;
        }
            
        for ( int i = 1; i < m; ++i )
        {
            para = readInt();
            custo = readInt();
            graph[para+1].pb( node(i+1, custo) );
        }
        cchain = 0;
        explore(1, 0);
        heavy_light(1, 0, -1, 0);
        BFS();
        n = readInt();
        for ( int i = 0; i < n; ++i )
        {
            de = readInt();
            para = readInt();
            int l = lca(de+1, para+1);
            if ( i ) printf(" %llu", acc[de]+acc[para] - 2*acc[l-1]);
            else printf("%llu", acc[de]+acc[para] - 2*acc[l-1]);
        }
        printf("\n");
        graph.clear();
    }
    return 0;
}
