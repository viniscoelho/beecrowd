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
	scanf("%d", &t);
	while (t--)
	{
		vi res;
		scanf("%d", &s);
		while (s--)
		{
			scanf("%d", &a);
			res.pb(a);
		}
		scanf(" %s", &comm);
		int resp = 0;
		for (int i = 0; i < strlen(comm); ++i)
			if (comm[i] == 'S' && res[i] <= 2)
				resp++;
			else if (comm[i] == 'J' && res[i] > 2)
				resp++;
		printf("%d\n", resp);
	}
	return 0;
}
