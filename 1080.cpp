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
	int a = 1, b, pos, m = -INF;
	while (a < 101)
	{
		cin >> b;
		if (b > m)
			pos = a, m = b;
		a++;
	}
	cout << m << "\n"
		 << pos << "\n";
	return 0;
}
