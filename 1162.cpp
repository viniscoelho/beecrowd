#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <cmath>
#include <queue>
#include <ctime>
#include <cfloat>
#include <vector>
#include <string>
#include <cstdio>
#include <bitset>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <iomanip>
#include <sstream>
#include <utility>
#include <tr1/unordered_map>
#define FOR(i, a, b) for ( int i = a; i <= b; ++i )
#define RFOR(i, b, a) for ( int i = b; i >= a; --i )
#define REP(i, N) for ( int i = 0; i < N; ++i )
#define MAXV 50
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3FFFFFFFFFLL
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

typedef vector<int> vi;
typedef pair<int, int> ii;

int visited[60], start[60], vis = 1;

int main(){
	int k, t, pos;
	scanf("%d", &k);
	while ( k-- ){
		scanf("%d", &t);
		REP( i, t ) scanf("%d", &start[i]);
		int ans = 0;
		REP( pos, t ){
			visited[pos+1] = vis;
			REP( j, t ){
				if ( start[j] == pos+1 ) break;
				if ( visited[start[j]] != vis ) ans++;
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", ans);
		vis++;
	}
	return 0;
}