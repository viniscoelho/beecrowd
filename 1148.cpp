#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <list>
#include <queue>
#include <cstring>
#include <set>
#define mp make_pair
#define pb push_back
#define MAXV 510
#define color 0

using namespace std;

typedef pair<int, int> ii;

int V, A;
vector<list<ii>> graph(MAXV);
int adj[MAXV][MAXV], dist[MAXV];
bool visited[MAXV];

const int INF = 0x3f3f3f3f;

void initialize()
{
	for (int i = 0; i < V; ++i)
	{
		for (int j = i; j < V; ++j)
			adj[i][j] = adj[j][i] = INF;
		adj[i][i] = INF;
	}
}

int dijkstra(int de, int para)
{
	for (int i = 0; i < V; ++i)
	{
		dist[i] = INF;
		visited[i] = false;
	}
	priority_queue<ii> pq;
	pq.push(mp(0, de));
	dist[de] = 0;
	list<ii>::iterator it;
	while (!pq.empty())
	{
		ii atual = pq.top();
		pq.pop();
		int custo = -atual.first;
		int v = atual.second;
		if (v == para)
			return custo;
		if (visited[v])
			continue;
		visited[v] = true;
		for (it = graph[v].begin(); it != graph[v].end(); it++)
		{
			if (adj[v][it->first] == 0)
				it->second = 0;
			if (dist[it->first] >= custo + it->second)
			{
				dist[it->first] = custo + it->second;
				pq.push(mp(-dist[it->first], it->first));
			}
		}
	}
	return INF;
}

int main()
{
	ios::sync_with_stdio(false);
	bool flag = false;
	while (cin >> V >> A && V + A)
	{
		int x, y, h, k;
		initialize();
		if (flag)
			for (int i = 0; i < V; ++i)
				graph[i].clear();
		for (int i = 0; i < A; ++i)
		{
			cin >> x >> y >> h;
			graph[x - 1].pb(mp(y - 1, h));
			if (adj[y - 1][x - 1] != INF)
				adj[x - 1][y - 1] = adj[y - 1][x - 1] = 0;
			else
				adj[x - 1][y - 1] = h;
		}
		cin >> k;
		for (int i = 0; i < k; ++i)
		{
			cin >> x >> y;
			int resp = dijkstra(x - 1, y - 1);
			if (resp != INF)
				cout << resp << "\n";
			else
				cout << "Nao e possivel entregar a carta\n";
		}
		cout << "\n";
		flag = true;
	}
	return 0;
}
