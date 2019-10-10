#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <list>
#include <set>
#include <string>
#include <map>
#include <sstream>
#include <iomanip>
#include <cstdio>
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f
#define INFLL 1000000000000000LL
#define MAX 220

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef unsigned long long int64;

int b, n;

int main()
{
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--)
	{
		string a;
		cin >> a >> b;
		for (int i = 0; i < a.size(); ++i)
			if (int(a[i]) - b < 65)
				cout << char(int(a[i]) - b + 26);
			else
				cout << char(int(a[i]) - b);
		cout << "\n";
	}
	return 0;
}
