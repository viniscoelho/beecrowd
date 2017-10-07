#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
#include <vector>
#include <string>
#define mp make_pair
#define pb push_back

using namespace std;

int m;

typedef unsigned long long uint64;
typedef pair<int, int> ii;

int main(){
	ios::sync_with_stdio(false);
    while ( cin >> m ){
		cin.ignore();
		vector<string> tel;
		string str;
		for ( int i = 0; i < m; ++i ){
			getline(cin, str);
			tel.pb(str);
		}
		sort( tel.begin(), tel.end() );
		int resp = 0;
		bool ok = false;
		for ( int i = 0; i < m-1; ++i ){
			for ( int j = 0; j < tel[i].size(); ++j ){
				if ( tel[i][j] == tel[i+1][j] ) resp++;
				else break;
			}
		}
		cout << resp << "\n";
	}
	return 0;
}

