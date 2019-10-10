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
#define MAXN 110
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3FFFFFFFFFLL
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

typedef vector<int> vi;
typedef long long int64;
typedef unsigned long long uint64;
typedef pair<double, double> dd;
typedef pair<string, dd> sdd;

char word[MAXN];

int main()
{
	int a, t, n = 0;
	while (gets(word))
	{
		vector<char> l;
		unordered_map<char, int> letters;
		unordered_map<char, int>::iterator it;
		REP(k, strlen(word))
		if (word[k] != ' ') letters[word[k]] = 0;
		for (it = letters.begin(); it != letters.end(); it++)
			l.pb(it->first);
		sort(l.begin(), l.end());
		int c = 0;
		REP(k, l.size())
		{
			if (k + 1 < l.size() && l[k + 1] == char(l[k] + 1))
			{
				char b = l[k], e = l[k + 1];
				while (k + 1 < l.size() && l[k + 1] == char(l[k] + 1))
					e = l[++k];
				if (c++)
					cout << ", " << b << ":" << e;
				else
					cout << b << ":" << e;
			}
			else
			{
				if (c++)
					cout << ", " << l[k] << ":" << l[k];
				else
					cout << l[k] << ":" << l[k];
			}
		}
		cout << "\n";
	}
	return 0;
}