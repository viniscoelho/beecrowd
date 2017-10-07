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
	int a, b, c;
	while ( cin >> a && a ){
		if ( a % 2 ) a++;
		int sum = 0;
		for ( int i = 0; i < 5; i++ ){
			sum += a;
			a += 2;
		}
		cout << sum << "\n";
	}
    return 0;
}
