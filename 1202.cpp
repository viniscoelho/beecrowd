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
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 1000010
#define pb push_back
#define mp make_pair

using namespace std;

typedef vector<int> vi;
typedef long long int64;
typedef unsigned long long uint64;

char str[MAX];
int fib[1550];

void fibonacci()
{
	int64 f, f1, f2;
	fib[0] = 0;
	fib[1] = fib[2] = 1;
	f1 = f2 = 1;
	FOR(i, 3, 1501)
	{
		f = (f1 + f2) % 1000;
		fib[i] = f;
		f1 = f2;
		f2 = f;
	}
}

int main()
{
	int64 t;
	scanf("%lld", &t);
	getchar();
	fibonacci();
	while (t--)
	{
		gets(str);
		int64 ans = 0, str_size = strlen(str);
		if (str_size == 1)
			ans = str[0] - 48;
		for (int j = 0; j < str_size - 1; ++j)
		{
			if (!j)
				ans = ((str[j] - 48) << 1) + (str[j + 1] - 48);
			else
				ans = (ans << 1) % 1500 + (str[j + 1] - 48);
		}
		ans = fib[ans];
		printf("%03lld\n", ans);
	}
	return 0;
}