#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#include <queue>
#include <vector>
#include <list>
#include <climits>
#include <algorithm>
#define mp make_pair
#define pb push_back
#define MAX 210
#define INF 0x3f3f3f3f

using namespace std;

typedef long long int64;
typedef pair<int64, int64> ii;

int main()
{
	ios::sync_with_stdio(false);
	int c;
	cin >> c;
	string a, b;
	while (c--)
	{
		cin >> a >> b;
		if (b.size() > a.size())
			cout << "nao encaixa\n";
		else
		{
			int t = 0;
			for (int i = a.size() - 1, j = b.size() - 1; j >= 0 && a[i] == b[j]; j--, i--)
				t++;
			if (t == b.size())
				cout << "encaixa\n";
			else
				cout << "nao encaixa\n";
		}
	}

	return 0;
}
