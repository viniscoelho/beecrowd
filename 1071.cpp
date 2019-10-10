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
	int a, b, soma = 0;
	cin >> a >> b;
	for (int i = min(a, b) + 1; i < max(a, b); ++i)
		if (abs(i) % 2 != 0)
			soma += i;
	cout << soma << "\n";
	return 0;
}
