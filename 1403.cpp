#include <iostream>
#include <algorithm>
#include <list>
#include <cmath>
#include <queue>
#include <vector>
#include <cstdio>
#include <climits>
#include <cstdlib>
#include <tr1/unordered_map>
#define FOR(i, a, b) for ( int i = a; i <= b; ++i )
#define RFOR(i, b, a) for ( int i = b; i >= a; --i )
#define REP(i, N) for ( int i = 0; i < N; ++i )
#define REPIT(c, it) for ( list<ii>::iterator it = c.begin(); it != c.end(); it++ )
#define MAX 30
#define INF 0x3F3F3F3F
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

typedef long long int64;
typedef pair<int, int> ii;
typedef vector<int> vi;

int main(){
	ios::sync_with_stdio(false);
	int m, n, x;
	while ( cin >> m >> n && m+n ){
		unordered_map<int, int> grandpa;
		unordered_map<int, int>::iterator it;
		REP ( i, m ){
			REP ( j, n ){
				cin >> x;
				if ( !grandpa.count(x) ) grandpa.insert( mp(x, 1) );
				else grandpa[x]++;
			}
		}
		priority_queue<ii> resp; 
		for ( it = grandpa.begin(); it != grandpa.end(); ++it )
			resp.push( mp( it->second, -it->first ) );
		resp.pop();
		int maior = resp.top().first;
		while ( !resp.empty() && resp.top().first == maior ){
			cout << -resp.top().second << " ";
			resp.pop();
		}
		cout << "\n";
		
	}
	return 0;
}
