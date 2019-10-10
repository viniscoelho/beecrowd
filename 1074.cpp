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
	int a, b;
	cin >> a;
	for (int i = 0; i < a; ++i)
	{
		cin >> b;
		if (b == 0)
			cout << "NULL\n";
		else if (b < 0 && abs(b) % 2)
			cout << "ODD NEGATIVE\n";
		else if (b > 0 && abs(b) % 2)
			cout << "ODD POSITIVE\n";
		else if (b < 0 && !(abs(b) % 2))
			cout << "EVEN NEGATIVE\n";
		else if (b > 0 && !(abs(b) % 2))
			cout << "EVEN POSITIVE\n";
	}
	return 0;
}
