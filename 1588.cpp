#include <iostream>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <map>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef pair<iii, int> i4;
typedef long long int64;

struct node{
	int pontos, vitorias, gols, pos;
	node(int pontos = 0, int vitorias = 0, int gols = 0, int pos = 0) : pontos(pontos), vitorias(vitorias), gols(gols), pos(pos) {}
};

int main(){
	ios::sync_with_stdio(false);
	int n, a, b, p;
	cin >> n;
	string num;
	while ( n-- )
	{
		cin >> a >> b;
		string s;
		map<string, node> times;
		map<int, string> resp;
		for ( int i = 0; i < a; i++ )
		{
			cin >> s;
			times[s] = node(0, 0, 0, i);
			resp[i] = s;
		}
		string t1, t2;
		int p1, p2;
		for ( int i = 0; i < b; i++ )
		{
			cin >> p1 >> t1;
			times[t1].gols += p1;
			cin >> p2 >> t2;
			times[t2].gols += p2;
			if ( p1 > p2 )
			{
				times[t1].pontos += 3;
				times[t1].vitorias++;
			}
			else if ( p2 > p1 )
			{
				times[t2].pontos += 3;
				times[t2].vitorias++;
			}
			else
			{
				times[t1].pontos++;
				times[t2].pontos++;
			}
		}
		map<string, node>::iterator it;
		priority_queue<i4> pq;
		for ( it = times.begin(); it != times.end(); it++ )
		{
			pq.push(mp(mp(it->second.pontos, mp(it->second.vitorias, it->second.gols)), -it->second.pos));
		}
		while ( !pq.empty() )
		{
			cout << resp[-pq.top().second] << "\n";
			pq.pop();
		}

	}
	return 0;
}