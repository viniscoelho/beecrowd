#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <map>
#define mp make_pair

using namespace std;

int main(){
	ios::sync_with_stdio(false);	
	int a;
	cin >> a;
	for ( int i = 2; i <= a; i += 2 )
		cout << i << "^2 = " << i*i << "\n";
    return 0;
}
