#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <cmath>
#include <queue>
#include <ctime>
#include <cfloat>
#include <vector>
#include <string>
#include <cstdio>
#include <bitset>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <iomanip>
#include <sstream>
#include <utility>
#include <tr1/unordered_map>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define REPIT(it, V) for (list<int>::iterator it = V.begin(); it != V.end(); ++it)
#define MAXV 50
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3FFFFFFFFFLL
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

typedef vector<int> vi;
typedef pair<int, int> ii;

int main()
{
	int h, k, n, num, t = 0;
	scanf("%d", &k);
	while (k--)
	{
		if (t++)
			printf("\n");
		scanf("%d %d", &h, &n);
		vector<list<int>> hashT(h);
		REP(i, n)
		{
			scanf("%d", &num);
			hashT[num % h].pb(num);
		}
		REP(i, h)
		{
			printf("%d -> ", i);
			REPIT(it, hashT[i])
			printf("%d -> ", *it);
			printf("\\\n");
		}
	}
	return 0;
}