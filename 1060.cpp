#include <cstring>
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
	double a;
	int qtd = 0;
	for (int i = 0; i < 6; ++i)
	{
		cin >> a;
		if (a >= 0)
			qtd++;
	}
	cout << qtd << " valores positivos\n";
	return 0;
}
