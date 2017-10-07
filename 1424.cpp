#include <iostream>
#include <algorithm>
#include <functional>
#include <locale>
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
#include <cctype>
#include <iomanip>
#include <sstream>
#include <utility>
#include <tr1/unordered_map>
#define FOR(i, a, b) for( int i = a; i <= b; ++i )
#define RFOR(i, b, a) for( int i = b; i >= a; --i )
#define REP(i, N) for( int i = 0; i < N; ++i )
#define MAX 110
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

const double pi = acos(-1.0);
const double EPS = 1e-9;
const double INF = 1e50;

typedef long long ll;
typedef pair<double, double> dd;
typedef pair<int, int> ii;

int main(){
	int a, b, k, v, n;
	while ( scanf("%d %d", &a, &b) != EOF ){
		unordered_map<int, vector<int> > busca;
		REP ( i, a ){
			scanf("%d", &n);
			busca[n].pb( i+1 );
		}
		REP ( i, b ){
			scanf("%d %d", &k, &v);
			if ( !busca.count(v) || busca[v].size() < k ) printf("0\n");
			else printf("%d\n", busca[v][k-1]);
		}
	}
	return 0;
}
