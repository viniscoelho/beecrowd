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

int main()
{
	ios::sync_with_stdio(false);
	double base = 1, sum = 0;
	while (base <= 100)
	{
		sum += (1 / base);
		base++;
	}
	cout << fixed << setprecision(2) << sum << "\n";
	return 0;
}
