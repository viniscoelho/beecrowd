#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <cmath>
#include <queue>
#include <ctime>
#include <cctype>
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
#define FOR(i, a, b) for( int i = a; i <= b; ++i )
#define RFOR(i, b, a) for( int i = b; i >= a; --i )
#define REP(i, N) for( int i = 0; i < N; ++i )
#define MAXN 10000
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3FFFFFFFFFLL
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

typedef long long int64;
typedef pair<int, int> ii;

char *p, a, word[220];

int main(){
    while ( gets(word) ){
		p = strtok( word, " " );
		int ans = 0, cont = 0;
		while ( p != NULL ){
			if ( !cont ) cont++, a = tolower(*p);
			else if ( cont == 1 && tolower(*p) == a ) ans++, cont++;
			else if ( tolower(*p) != a ) cont = 1, a = tolower(*p);
			p = strtok( NULL, " " );
		}
		printf("%d\n", ans);
    }
    return 0;
}
