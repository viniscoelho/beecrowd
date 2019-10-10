#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#include <algorithm>
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<int, int> prime_pot;
typedef long long int64;

int resp;

void days(double d, int n)
{
	if (d > 1)
	{
		days(d / 2, n + 1);
		resp++;
	}
}

int main()
{
	int a;
	double b;
	scanf("%d", &a);
	while (a--)
	{
		scanf("%lf", &b);
		resp = 0, days(b, 0);
		printf("%d dias\n", resp);
	}
	return 0;
}
