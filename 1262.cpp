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
#define MAXN 10000
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3FFFFFFFFFLL
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

typedef vector<int> vi;
typedef long long int64;
typedef unsigned long long uint64;

char buffer[60];
int procs;

int main(){
	while ( gets(buffer) ){
		scanf("%d", &procs);
		int ans = 0, qtd = 0;
		for ( int i = 0; i < strlen(buffer); ++i ){
			while ( i < strlen(buffer) && buffer[i] == 'W' ) i++, ans++;
			while ( i < strlen(buffer) && buffer[i] == 'R' && qtd < procs ) i++, qtd++;
			if ( qtd ) ans++, qtd = 0, i--;
		}
		printf("%d\n", ans);
		getchar();
	}
	return 0;
}
