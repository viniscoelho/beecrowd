#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <map>
#define mp make_pair

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int a, b, n = 0, y = 0;
	cin >> a;
	for (int i = 0; i < a; ++i)
	{
		cin >> b;
		if (b >= 10 && b <= 20)
			y++;
		else
			n++;
	}
	cout << y << " in\n";
	cout << n << " out\n";
	return 0;
}
