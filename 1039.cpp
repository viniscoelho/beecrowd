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
  double xa, ya, xb, yb, r1, r2;
  while (cin >> r1 >> xa >> ya >> r2 >> xb >> yb)
  {
    double d = sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
    if (r1 - r2 >= d)
      cout << "RICO\n";
    else
      cout << "MORTO\n";
  }
  return 0;
}
