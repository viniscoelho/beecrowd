#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	long long n, t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		if (n == 2 || n == 3)
			cout << "Prime\n";
		else if (n == 1 || n % 2 == 0)
			cout << "Not Prime\n";
		else
		{
			bool flag = false;
			for (long long i = 3; i <= sqrt(n); i += 2)
				if (n % i == 0)
				{
					cout << "Not Prime\n";
					flag = true;
					break;
				}
			if (!flag)
				cout << "Prime\n";
		}
	}
	return 0;
}