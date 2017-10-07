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
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3FFFFFFFFFLL
#define pb push_back
#define mp make_pair

using namespace std;

typedef vector < int > vi;
typedef long long int64;
typedef unsigned long long uint64;

string buffer;

int main(){
	ios::sync_with_stdio(false);
	while ( getline(cin, buffer) ){
		string temp;
		while ( buffer[buffer.size()-1] != '#' ){
			getline(cin, temp);
			buffer += temp;
		}
		int64 ans = 0;
		if ( buffer.size() == 2 ) ans = buffer[0]-48;
		for ( int j = 0; j < buffer.size()-2; ++j ){
			if ( !j ) ans = (buffer[j]-48)*2 + (buffer[j+1]-48);
			else ans = ( ( ans % 131071 )*2 ) % 131071 + (buffer[j+1]-48);
		}
		if ( ans % 131071 == 0 ) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
