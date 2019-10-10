#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 110
#define pb push_back
#define mp make_pair

using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-9;
const double INF = 1e50;

typedef long long ll;
typedef pair<double, double> dd;

int main()
{
	ios::sync_with_stdio(false);
	int a, b;
	while (cin >> a && a)
	{
		int M[a], L[a], sM = 0, sL = 0, summomM = 0, summomL = 0;
		bool d = false;
		REP(i, a)
		{
			cin >> M[i];
			sM += M[i];
		}
		REP(i, a)
		{
			cin >> L[i];
			sL += L[i];
		}
		for (int i = 1; i < a; ++i)
		{
			if (!d)
			{
				if (M[i - 1] == M[i])
					summomM++;
				else
					summomM = 0;
				if (L[i - 1] == L[i])
					summomL++;
				else
					summomL = 0;
				if (summomM == 2 && summomM != summomL)
				{
					sM += 30;
					d = true;
				}
				else if (summomL == 2 && summomM != summomL)
				{
					sL += 30;
					d = true;
				}
				if (summomM == summomL && summomL == 2)
					d = true;
			}
		}
		if (sL == sM)
			cout << "T\n";
		else if (sL > sM)
			cout << "L\n";
		else
			cout << "M\n";
	}
	return 0;
}
