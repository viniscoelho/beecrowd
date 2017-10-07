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
	string name;
	double a, b;
	getline(cin, name);
	cin >> a >> b;
	cout << "TOTAL = R$ " << fixed << setprecision(2) << a + b*0.15 << "\n";
	
	return 0;
}
