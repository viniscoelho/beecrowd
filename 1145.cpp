#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstdio>

using namespace std;
typedef long long int64;

int main(){
	int x, y, t = 0;
	scanf("%d %d", &x, &y);
	for ( int i = 1; i <= y; ++i ){
		if ( t == 0 ) printf("%d", i);
		else printf(" %d", i);
		t++;
		if ( t == x ){
			printf("\n");
			t = 0;
		}
	}
	if ( t != 0 ) printf("\n");
	return 0;
}
