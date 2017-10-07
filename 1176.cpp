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
typedef long long int64;

int main(){
	ios::sync_with_stdio(false);	
	int64 f1 = 0, f2 = 0, f3 = 1;
	int64 fib[61], a, b;
	cin >> a;
	for ( int i = 0; i <= 60; ++i ){
		fib[i] = f1;
		f1 += f3;
		f3 = f2;
		f2 = f1;
	}
	for ( int i = 0; i < a; ++i ){
		cin >> b;
		cout << "Fib(" <<  b << ") = " << fib[b] << "\n";
	}
    return 0;
}
