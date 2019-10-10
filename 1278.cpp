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
#define MAXN 60
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

int main()
{
	ios::sync_with_stdio(false);
	int n = 0, t;
	string word, buff;
	while (cin >> t && t)
	{
		cin.ignore();
		if (n++)
			cout << "\n";
		int m = 0;
		vector<string> words;
		REP(i, t)
		{
			getline(cin, word);
			istringstream buffer(word);
			int q = 0;
			string nov;
			while (buffer >> buff)
			{
				if (q++)
					nov += " ";
				nov += buff;
			}
			words.pb(nov);
			m = max(m, int(nov.size()));
		}
		REP(i, t)
		{
			int c = 0, s = words[i].size();
			while (s + c < m)
			{
				cout << " ";
				c++;
			}
			cout << words[i] << "\n";
		}
	}
	return 0;
}