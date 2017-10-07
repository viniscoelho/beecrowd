#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	double a, b, c, delta;
	cin >> a >> b >> c;
	delta = b*b - 4*a*c;
	if ( delta >= 0 && a != 0 ){
		cout << "R1 = " << fixed << setprecision(5) << (-b + sqrt(delta))/(2*a) << "\n";
		cout << "R2 = " << fixed << setprecision(5) << (-b - sqrt(delta))/(2*a) << "\n";
	}
	else cout << "Impossivel calcular\n";
	
	return 0;
}
