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
#define MAXN 60
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3FFFFFFFFFLL
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

typedef vector<int> vi;
typedef long long int64;
typedef unsigned long long uint64;
typedef pair<double, double> dd;
typedef pair<string, dd> sdd;

char word[MAXN][MAXN];

int main(){
	int n = 0, t;
	while ( scanf("%d", &t) && t ){
		if ( n++ ) printf("\n");
		int m = 0;
		REP ( i, t ){
			scanf(" %s", &word[i]);
			m = max(m, int(strlen(word[i])));
		}
		REP ( i, t ){
			int c = 0, s = strlen(word[i]);
			while ( s+c < m ){
				printf(" ");
				c++;
			}
			puts(word[i]);
		}
    }
	return 0;
}