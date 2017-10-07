#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#define mp make_pair
#define INF 0x3f3f3f3f

using namespace std;

int main(){
	int n, a;
	scanf("%d", &n);
	for ( int i = 0; i < 10; ++i ){
		printf("N[%d] = %d\n", i, n);
		n *= 2;
	}
    return 0;
}
