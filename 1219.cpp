#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define INF 0x3f3f3f3f
#define MAX 1010
#define REP(i, V) for (int i = 0; i < V; ++i)
#define REPIT(it, V) for (list<int>::iterator it = V.begin(); it != V.end(); ++it)

using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> ii3;

int main()
{
	double a, b, c;
	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
	{
		//perimetro triangulo
		double p = a + b + c;
		//area triangulo
		double AT = sqrt((p / 2) * ((p / 2) - a) * ((p / 2) - b) * ((p / 2) - c));
		//raio circulo inscrito
		double RI = (2 * AT) / p;
		//raio circulo circunscrito
		double RC = (a * b * c) / sqrt((a + b + c) * (b + c - a) * (c + a - b) * (a + b - c));
		printf("%.4f %.4f %.4f\n", (RC * RC * acos(-1)) - AT, AT - (RI * RI * acos(-1)), RI * RI * acos(-1));
	}
	return 0;
}
