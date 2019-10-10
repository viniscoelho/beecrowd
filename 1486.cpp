#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <map>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cctype>
#define mp make_pair
#define pb push_back
#define MAXV 1010
#define COLOR 0

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<string, string> ss;
typedef pair<int, ss> iss;

vector<list<int>> graph(MAXV);

int visited[MAXV], v = 1, ans, resp, q, t;

int main()
{
	ios::sync_with_stdio(false);
	int p, n, c;
	while (cin >> p >> n >> c && p + n + c)
	{
		int cbd[n][p];
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < p; ++j)
				cin >> cbd[i][j];
		int num = 0, resp = 0;
		for (int i = 0; i < p; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (cbd[j][i] == 1)
					num++;
				else
				{
					if (num >= c)
						resp++;
					num = 0;
				}
			}
			if (num >= c)
				resp++;
			num = 0;
		}
		cout << resp << "\n";
	}
	return 0;
}
