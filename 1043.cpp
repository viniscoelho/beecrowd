#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	double a, b, c;
	cin >> a >> b >> c;
	double x = b - c, y = a - c, z = a - b;
	if (x < 0)
		x = -x;
	if (y < 0)
		y = -y;
	if (z < 0)
		z = -z;
	if (!(x < a && a < b + c) && !(y < b && b < a + c) && !(z < c && c < a + b))
		cout << "Area = " << fixed << setprecision(1) << ((a + b) * c) / 2 << "\n";
	else
		cout << "Perimetro = " << fixed << setprecision(1) << a + b + c << "\n";
	return 0;
}
