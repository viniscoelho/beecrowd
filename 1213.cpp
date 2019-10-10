#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#include <queue>
#include <vector>
#include <list>
#include <climits>
#include <algorithm>
#define mp make_pair
#define pb push_back
#define MAX 210
#define INF 1000000000000000LL

using namespace std;

typedef long long int64;
typedef pair<int, int> ii;
typedef vector<int> vi;
const double EPS = 1e-10;

char comm[100];

int main()
{
	int a, s, t;
	while (scanf("%d", &t) != EOF)
	{
		int a = 1, b = 1, c = 0;
		while (a)
		{
			a = b % t;
			b = (b * 10 + 1) % t;
			c++;
		}
		printf("%d\n", c);
	}
	return 0;
}
