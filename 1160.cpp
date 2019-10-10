#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#define mp make_pair
#define INF 0x3f3f3f3f

using namespace std;

typedef long long int64;

int main()
{
	int n;
	double a, b, c, d;
	scanf("%lld", &n);
	while (n--)
	{
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		if (int(c * 100) < int(d * 100))
			printf("Mais de 1 seculo.\n");
		else
		{
			c /= 100., d /= 100.;
			int t = 0;
			while (int(a) <= int(b) && t < 101)
			{
				a += int(a * c), b += int(b * d);
				t++;
			}
			if (t > 100)
				printf("Mais de 1 seculo.\n");
			else
				printf("%d anos.\n", t);
		}
	}
	return 0;
}
