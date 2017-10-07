#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <map>
#define mp make_pair
#define INF 0x3f3f3f3f

using namespace std;

int main(){
	ios::sync_with_stdio(false);	
	int f1 = 0, f2 = 0, f3 = 1, x;
	cin >> x;
	for ( int i = 0; i < x; ++i ){
		if ( i == 0 ) cout << f1;
		else cout << " " << f1;
		f1 += f3;
		f3 = f2;
		f2 = f1;
	}
	cout << "\n";
    return 0;
}
