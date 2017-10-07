#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int t, a, b;
	while ( cin >> a >> b && ( a > 0 && b > 0 ) ){
		int sum = 0;
		for ( int i = min(a, b); i <= max(a, b); ++i ){
			cout << i << " ";
			sum += i;
		}
		cout << "Sum=" << sum << "\n";
	}
	return 0;
}