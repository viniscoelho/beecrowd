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
#define MAXN 1010
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3FFFFFFFFFLL
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

typedef vector<int> vi;
typedef long long int64;
typedef unsigned long long uint64;

vi perm(MAXN);

int main()
{
	int num, n;
	while (scanf("%d", &num) && num)
	{
		while (scanf("%d", &perm[0]) && perm[0])
		{
			stack<int> temp;
			for (int i = 1; i < num; ++i)
				scanf("%d", &perm[i]);
			int pos = 1;
			for (int i = 0; i < num; ++i)
			{
				while (pos <= perm[i])
					temp.push(pos++);
				if (!temp.empty() && temp.top() == perm[i])
					temp.pop();
				else
					break;
			}
			if (!temp.empty())
				printf("No\n");
			else
				printf("Yes\n");
		}
		printf("\n");
	}
	return 0;
}
