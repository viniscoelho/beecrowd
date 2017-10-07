#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;
typedef long long int64;

int main(){
	ios::sync_with_stdio(false);
	int64 c, sum = 0, a = 0, g = 0, d = 0;
	while ( cin >> c && c != 4 ){
		if ( c == 1 ) a++;
		else if ( c == 2 ) g++;
		else if ( c == 3 ) d++;
	}
	cout << "MUITO OBRIGADO\n";
	cout << "Alcool: " << a << "\n";
	cout << "Gasolina: " << g << "\n";
	cout << "Diesel: " << d << "\n";
	return 0;
}
