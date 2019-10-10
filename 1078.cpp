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
	for (int i = 1; i <= 10; ++i)
		cout << i << " x " << a << " = " << i * a << "\n";
	return 0;
}
