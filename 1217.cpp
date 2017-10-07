#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <iomanip>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	double a, sum = 0, din = 0;
	int t;
	cin >> t;
    for ( int i = 1; i <= t; ++i ){
		double cont = 0;
		string resp, qtd;
		cin >> a;
		din += a;
		cin.ignore();
		getline(cin, resp);
		istringstream str(resp);
		while ( str >> qtd ) cont++;
		cout << "day " << i << ": " << cont << " kg\n";
		sum += cont;
		
    }
	cout << fixed << setprecision(2) << sum/double(t) << " kg by day\n";
	cout << "R$ " << fixed << setprecision(2) << din/double(t) << " by day\n";
    return 0;
}

