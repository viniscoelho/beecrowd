#include <bits/stdc++.h>
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
typedef pair<int, int> ii;

string tag, ntag, resp;

int main()
{
	ios::sync_with_stdio(false);
	int n, s;
	while (getline(cin, tag))
	{
		getline(cin, ntag);
		getline(cin, resp);
		bool f = false;
		map<int, int> bib;
		map<int, int>::iterator it;
		int p;
		for (int k = 0; k < tag.size(); ++k)
			tag[k] = char(tolower(tag[k]));
		for (int k = 0; k < resp.size(); ++k)
		{
			if (resp[k] == '<' && !f)
				p = k + 1, f = true;
			else if (resp[k] == '>' && f)
			{
				if (k - 1 > p)
					bib[p] = k - 1;
				f = false;
			}
			else if (resp[k] == '<' && f)
				f = false;
		}
		int pos = 0;
		for (it = bib.begin(); it != bib.end(); ++it)
		{
			for (int j = pos; j < it->first; ++j)
				cout << resp[j];
			pos = it->second + 1;
			for (int j = it->first; j <= it->second; ++j)
			{
				string ans;
				for (int k = j; k < j + tag.size(); ++k)
					ans += char(tolower(resp[k]));
				if (ans == tag)
				{
					cout << ntag;
					j += tag.size() - 1;
				}
				else
					cout << resp[j];
			}
		}
		if (pos < resp.size())
			for (int j = pos; j < resp.size(); ++j)
				cout << resp[j];
		cout << "\n";
	}
	return 0;
}
