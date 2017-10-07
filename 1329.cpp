#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstring>
#define pb push_back

using namespace std;

typedef long long ll;

int main(){
	int n;
	while ( scanf("%d", &n) && n ){
		int m = 0, j = 0, x;
		for ( int i = 0; i < n; ++i ){
			scanf("%d", &x);
			if ( x ) j++;
			else m++;
		}
		printf("Mary won %d times and John won %d times\n", m, j);
    }
    return 0;
}
