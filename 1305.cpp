#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 5010
#define pb push_back
#define mp make_pair

using namespace std;

char a[60], b[60];

int main()
{
	while (scanf(" %[^\n]", a))
	{
		scanf(" %[^\n]", b);
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