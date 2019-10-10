#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define INF 0x3f3f3f3f
#define MAX 1010
#define REP(i, V) for (long i = 0; i < V; ++i)
#define REPIT(it, V) for (list<int>::iterator it = V.begin(); it != V.end(); ++it)

using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> ii3;
typedef long long int64;
typedef long double Ld;

double money[MAX];

int main()
{
	long d;
	while (scanf("%ld", &d) && d)
	{
		double sum = 0., r1 = 0., r2 = 0.;
		REP(i, d)
		{
			scanf("%lf", &money[i]);
			sum += money[i];
		}
		double high = floor((sum / d + 0.0099) * 100.) / 100.;
		double low = floor((sum / d) * 100.) / 100.;
		REP(i, d)
		if (money[i] > high)
			r1 += (money[i] - high);
		else if (money[i] < low)
			r2 += (low - money[i]);
		if (r2 > r1)
			printf("$%.2lf\n", r2);
		else
			printf("$%.2lf\n", r1);
	}
	return 0;
}
