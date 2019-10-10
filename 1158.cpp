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
	int a, b, c;
	cin >> a;
	while (a--)
	{
		cin >> b >> c;
		int sum = 0;
		if (b % 2 == 0)
			b++;
		for (int i = 0; i < c; ++i)
		{
			sum += b;
			b += 2;
		}
		cout << sum << "\n";
	}
	return 0;
}
