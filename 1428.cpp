#include <iostream>
#include <algorithm>
#include <list>
#include <cmath>
#include <queue>
#include <vector>
#include <cstdio>
#include <climits>
#include <cstdlib>
#include <deque>
#include <sstream>
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
	double a, b;
	int c;
	cin >> c;
	while ( c-- ){
		cin >> a >> b;
		cout << int(ceil((double(a-2)/3.0))*ceil((double(b-2)/3.0))) << "\n";
	}
	return 0;
}
