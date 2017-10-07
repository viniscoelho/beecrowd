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
	int f = 1, x;
	cin >> x;
	for ( int i = x; i > 0; --i )
		f *= i;
	cout << f << "\n";
    return 0;
}
