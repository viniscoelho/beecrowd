#include <bits/stdc++.h>
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
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	cin.ignore();
	string a, b;
	while ( t-- ){
		priority_queue<iis> resp;
		getline( cin, a );
		int pos = 60;
		istringstream buffer(a);
		while ( buffer >> b ){
			resp.push( mp( int(b.size()), mp( pos, b ) ) );
			pos--;
		}
		int c = 0;
		while ( !resp.empty() ){
			if ( !c ) cout << resp.top().second.second;
			else cout << " " << resp.top().second.second;
			resp.pop();
			c++;
		}
		cout << "\n";
	}
	return 0;
}
