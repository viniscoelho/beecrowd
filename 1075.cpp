#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <map>
#define mp make_pair

using namespace std;

int main(){
	ios::sync_with_stdio(false);	
	int a, b;
	cin >> a;
	for ( int i = 1; i <= 10000; ++i )
		if ( i % a == 2 ) cout << i << "\n";
    return 0;
}
