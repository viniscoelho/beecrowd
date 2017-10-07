#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n, q, k = 0;
    for ( cin >> n >> q; n + q != 0; cin >> n >> q ){
		cout << "CASE# " << ++k << ":" << endl;
		int x, y;
		vector<int> marble;
		for ( int i = 0; i < n; ++i ){
			cin >> x;
			marble.push_back(x);
		}
		sort( marble.begin(), marble.end() );
		for ( int i = 0; i < q; ++i ){
			cin >> y;
			vector<int>::iterator low;
			low = lower_bound( marble.begin(), marble.end(), y );
			if ( binary_search( marble.begin(), marble.end(), y ) )
			  cout << y << " found at " << int( low - marble.begin() )+1 << endl;
			else
			cout << y << " not found" << endl;
		}
    }
    return 0;
}