#include <cstring>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <map>
#define mp make_pair

using namespace std;

int main(){
	ios::sync_with_stdio(false);	
	double a, pos = 0, qtd = 0;
	for ( int i = 0; i < 6; ++i ){
		cin >> a;
		if ( a >= 0 ){
			pos += a;
			qtd++;
		}
	}
	cout << qtd << " valores positivos\n";
	cout << pos/qtd << "\n";
    return 0;
}
