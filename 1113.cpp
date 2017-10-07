#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int t, a, b;
	while ( cin >> a >> b && a != b ){
		if ( a > b ) cout << "Decrescente\n";
		else cout << "Crescente\n";
	}
	return 0;
}