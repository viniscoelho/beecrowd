/*
	Resolucao:
		Verificar se uma aresta e uma ponte.
		Se for, imprime "Y"; caso contrario "N"
*/

#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#define mp make_pair
#define pb push_back
#define MAXV 10010

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;

vector< list<int> > graph(MAXV);
int dfs_low[MAXV], dfs_num[MAXV], dfs_parent[MAXV];
int counter, r, c, q;

struct no{
	int pai;
	int rank;
};

typedef struct no UJoin;

UJoin pset[MAXV];

void Link (int x, int y){
	if ( pset[x].rank > pset[y].rank ) pset[y].pai = x;
	else{
		pset[x].pai = y;
		if ( pset[x].rank == pset[y].rank )
			pset[y].rank = pset[y].rank+1;
	}
}

int findSet ( int x ){
	while ( pset[x].pai != x )
		x = pset[x].pai;
	return x;	
}

void UnionSet ( int x, int y ){
	Link ( findSet(x), findSet(y) );
}

bool isSameSet ( int x, int y ){
	return findSet(x) == findSet(y);
}

void PointBridge( int u ){
	dfs_low[u] = dfs_num[u] = counter++;
	list<int>::iterator i;
	for ( i = graph[u].begin(); i != graph[u].end(); ++i ){
		if ( !dfs_num[*i] ){
			dfs_parent[*i] = u;
			PointBridge(*i);
			if ( dfs_low[*i] > dfs_num[u] )
			if ( !isSameSet(u, *i) ) UnionSet( u, *i );
			dfs_low[u] = min( dfs_low[u], dfs_low[*i] );
		}
		else if ( *i != dfs_parent[u] ) dfs_low[u] = min( dfs_low[u], dfs_num[*i] );
	}
}

int main(){
	int de, para;
    while ( scanf("%d %d %d", &r, &c, &q) && r + c + q ){
		for ( int i = 0; i < r; ++i ){
			dfs_parent[i] = dfs_low[i] = dfs_num[i] = 0;
			pset[i].pai = i;
			pset[i].rank = 0;
			graph[i].clear();
		}
		for ( int i = 0; i < c; ++i ){
			scanf("%d %d", &de, &para);
			graph[de-1].pb( para-1 );
			graph[para-1].pb( de-1 );
		}
		counter = 0;
		PointBridge(0);
		for ( int i = 0; i < q; ++i ){
			scanf("%d %d", &de, &para);
			if ( isSameSet( de-1, para-1 ) ) printf("Y\n");
			else printf("N\n");
		}
		printf("-\n");
	}
	return 0;
}
