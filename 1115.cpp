#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int t, a, b;
	while ( cin >> a >> b && ( a != 0 && b != 0 ) ){
		if ( a > 0 && b > 0 ) cout << "primeiro\n";
		else if ( a < 0 && b > 0 ) cout << "segundo\n";
		else if ( a < 0 && b < 0 ) cout << "terceiro\n";
		else cout << "quarto\n";
	}
	return 0;
}