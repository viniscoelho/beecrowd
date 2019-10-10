#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <list>
#include <cmath>
#define mp make_pair
#define pb push_back

using namespace std;

typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;

int main()
{
	ios::sync_with_stdio(false);
	double m, n, r1, r2;
	while (cin >> m >> n >> r1 >> r2 && m + n + r1 + r2)
	{
		double xa = max(r1, r2), ya = min(m, n) - max(r1, r2);
		double xb = max(m, n) - min(r1, r2), yb = min(r1, r2);
		double d = sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
		if (max(m, n) >= (2 * r1 + 2 * r2) && min(m, n) < max(2 * r1, 2 * r2))
			cout << "N\n";
		else if (max(m, n) < (2 * r1 + 2 * r2) && min(m, n) < max(2 * r1, 2 * r2))
			cout << "N\n";
		else if (d >= r1 + r2)
			cout << "S\n";
		else
			cout << "N\n";
	}
	return 0;
}
