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
	int a;
	cin >> a;
	for ( int i = 1; i <= a; ++i )
		if ( a % i == 0 ) cout << i << "\n";
    return 0;
}
