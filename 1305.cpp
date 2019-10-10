#include <iostream>
#include <algorithm>
#include <functional>
#include <locale>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <cmath>
#include <queue>
#include <ctime>
#include <cctype>
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
#define MAX 5010
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

char a[60], b[60];

int main()
{
	while (gets(a))
	{
		gets(b);
		int a_size = strlen(a), b_size = strlen(b);
		int p = 0, q = 0;
		string num, cutoff, resp;
		while (isdigit(a[p++]))
			resp += a[p - 1];
		while (isdigit(b[q++]))
			;
		FOR(i, p, a_size - 1)
		num += a[i];
		FOR(i, q, b_size - 1)
		cutoff += b[i];
		if (!resp.size())
			resp += "0";
		if (!cutoff.size())
			cutoff += "0";
		if (!num.size())
			num += "0";
		istringstream test(resp);
		int n = 0;
		test >> n;
		if (num.compare(cutoff) >= 0 && num.compare("0") != 0)
			cout << n + 1 << "\n";
		else
			cout << n << "\n";
	}

	return 0;
}