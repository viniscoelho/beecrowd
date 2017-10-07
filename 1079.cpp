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
	double x, y, z;
	cin >> a;
	while ( a-- ){
		cin >> x >> y >> z;
		cout << fixed << setprecision(1) << x*0.2 + y*0.3 + z*0.5 << "\n";
	}
    return 0;
}
