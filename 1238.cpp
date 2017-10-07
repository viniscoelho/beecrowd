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
#define FOR(i, a, b) for ( int i = a; i <= b; ++i )
#define RFOR(i, b, a) for ( int i = b; i >= a; --i )
#define REP(i, N) for ( int i = 0; i < N; ++i )
#define MAXN 10000
#define pb push_back
#define mp make_pair

using namespace std;

typedef vector <int> vi;
typedef pair<int, string> is;
typedef pair<int, is> iis;
typedef long long int64;
typedef unsigned long long uint64;

int main(){
	int t;
	scanf("%d", &t);
	char a[60], b[60];
	while ( t-- ){
		scanf(" %s %s", &a, &b);
		int i;
		for ( i = 0; i < strlen(a); ++i )
			if ( i < strlen(b) ) printf("%c%c", a[i], b[i]);
			else printf("%c", a[i]);
		for ( ; i < strlen(b); ++i ) printf("%c", b[i]);
		printf("\n");
	}
	return 0;
}
