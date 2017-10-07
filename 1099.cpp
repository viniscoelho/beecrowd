#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int t, a, b;
	cin >> t;
	while ( t-- ){
		int sum = 0;
		cin >> a >> b;
		for ( int i = min(a, b)+1; i < max(a, b); ++i )
			if ( i % 2 ) sum += i;
		cout << sum << "\n";
	}
	return 0;
}