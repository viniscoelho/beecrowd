#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#include <sstream>
#define mp make_pair
#define INF 0x3f3f3f3f

using namespace std;

int gcd(int a, int b){
	return (b == 0) ? a : gcd(b, a % b);
}

int lcm(int a, int b){
	return a*( b / gcd(a, b) );
}

int main(){
	int n, a, b;
	scanf("%d", &n);
	while ( n-- ){
		scanf("%d %d", &a, &b);
		printf("%d\n", gcd(a, b));
	}
    return 0;
}
