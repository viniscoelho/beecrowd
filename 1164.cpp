#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#define mp make_pair
#define INF 0x3f3f3f3f

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int n, a;
	cin >> n;
	while (n--)
	{
		cin >> a;
		int sum = 0;
		for (int i = 1; i <= a / 2; ++i)
			if (a % i == 0)
				sum += i;
		if (sum == a)
			cout << a << " eh perfeito\n";
		else
			cout << a << " nao eh perfeito\n";
	}
	return 0;
}
