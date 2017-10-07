#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstdio>

using namespace std;
typedef long long int64;

int main(){
	int t, a = 1;
	scanf("%d", &t);
	while ( t-- ){
		printf("%d %d %d PUM\n", a, a+1, a+2);
		a += 4;
	}
	return 0;
}
