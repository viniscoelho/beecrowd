#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 5010
#define pb push_back
#define mp make_pair
#define calc (((h * 3600.0 + m * 60.0 + s) - (ath * 3600.0 + atm * 60.0 + ats)) * atkm / 3600.0)

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string t, r;
	double sum = 0., init = 0., sp = 0.;
	while (getline(cin, t))
	{
		r = t;
		REP(i, t.size())
		if (t[i] == ':')
			t[i] = ' ';
		istringstream buffer(t);
		vector<double> res;
		double p;
		while (buffer >> p)
			res.pb(p);
		double s = res[0] * 3600. + res[1] * 60. + res[2];
		double now = (s - init) * sp;
		sum += now / 3600.;
		init = s;
		if (res.size() > 3)
			sp = res[3];
		else
			cout << r << " " << fixed << setprecision(2) << sum << " km\n";
	}
	return 0;
}