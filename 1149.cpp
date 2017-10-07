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
	int a, n, sum = 0;
	cin >> a >> n;
	while ( n <= 0 ) cin >> n;
	for ( int i = a, j = 0; j < n; i++, j++ )
		sum += i;
	cout << sum << "\n";
    return 0;
}
