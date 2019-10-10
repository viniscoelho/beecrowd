#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#define mp make_pair
#define pb push_back
#define REP(i, n) for (int i = 0; i < n; ++i)

using namespace std;

typedef pair<string, string> ss;

int main()
{
	ios::sync_with_stdio(false);
	int n, t = 0;
	while (cin >> n && n)
	{
		if (t++)
			cout << "\n";
		vector<ss> camisas;
		cin.ignore();
		string a, b, buffer;
		while (n--)
		{
			getline(cin, a);
			getline(cin, b);
			if (b[b.size() - 1] == 'P')
				b[b.size() - 1] = '1';
			else if (b[b.size() - 1] == 'M')
				b[b.size() - 1] = '2';
			else if (b[b.size() - 1] == 'G')
				b[b.size() - 1] = '3';
			camisas.pb(mp(b, a));
		}
		sort(camisas.begin(), camisas.end());
		REP(i, camisas.size())
		{
			buffer = camisas[i].first;
			if (buffer[buffer.size() - 1] == '1')
				buffer[buffer.size() - 1] = 'P';
			else if (buffer[buffer.size() - 1] == '2')
				buffer[buffer.size() - 1] = 'M';
			else if (buffer[buffer.size() - 1] == '3')
				buffer[buffer.size() - 1] = 'G';
			cout << buffer << " " << camisas[i].second << "\n";
		}
	}
	return 0;
}
