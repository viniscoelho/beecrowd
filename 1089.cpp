#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cctype>
#define mp make_pair
#define pb push_back
#define COLOR 0

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<string, string> ss;
typedef pair<int, ss> iss;

int main(){
	ios::sync_with_stdio(false);
	int n, p;
	while ( cin >> n && n ){
		vector<int> loop;
		int ans = 0, d = 0, c = 0;
		for ( int i = 0; i < n; ++i ){
			cin >> p;
			loop.pb(p);
		}
		for ( int i = 0; i < n; ++i ){
			if ( i != 0 && i != n-1 ){
				if ( loop[i] > loop[i-1] && loop[i] > loop[i+1] ) ans++;
			}
			else if ( i == n-1 ){
					if ( loop[n-1] > loop[n-2] && loop[n-1] > loop[0] ) ans++;
			}
			else if ( i == 0 )
					if ( loop[0] > loop[1] && loop[0] > loop[n-1] ) ans++;
		}
		if ( !ans ) ans++;
		cout << 2*ans << "\n";
	}
	return 0;
}
