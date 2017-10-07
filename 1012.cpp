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
	double a, b, c, pi = 3.14159;
	cin >> a >> b >> c;
	cout << "TRIANGULO: " << fixed << setprecision(3) << (a*c)/2 << "\n";
	cout << "CIRCULO: " << fixed << setprecision(3) << pi*c*c << "\n";
	cout << "TRAPEZIO: " << fixed << setprecision(3) << ((a+b)*c)/2 << "\n";
	cout << "QUADRADO: " << fixed << setprecision(3) << b*b << "\n";
	cout << "RETANGULO: " << fixed << setprecision(3) << a*b << "\n";
	
	return 0;
}
