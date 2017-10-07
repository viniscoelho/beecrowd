#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#define mp make_pair
#define pb push_back
#define REP(i, n) for( int i = 0; i < n; ++i )

using namespace std;

typedef pair<int, int> ii;

int main(){
	ios::sync_with_stdio(false);
	int n, t;
	cin >> n;
	vector<ii> oddeven;
	while ( n-- ){
		cin >> t;
		if ( t % 2 ) oddeven.pb( mp(1, -t) );
		else oddeven.pb( mp(0, t) );
	}
	sort(oddeven.begin(), oddeven.end());
	REP(i, oddeven.size()){
		if ( oddeven[i].second < 0 ) cout << -oddeven[i].second << "\n";
		else cout << oddeven[i].second << "\n";
	}
	return 0;
}
