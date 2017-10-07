#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <map>
#include <cstdlib>
#include <string>
#include <iomanip>
#define mp make_pair
#define pb push_back
#define MAXV 100100

using namespace std;

typedef vector<int> vi;
typedef pair<int, string> is;

int main(){
	ios::sync_with_stdio(false);
	int m;
	double a, b, c, d;
	cin >> m >> a >> b;
	cin >> m >> c >> d;
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << a*b + c*d << "\n";
	
	return 0;
}
