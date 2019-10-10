#include <iostream>
#include <algorithm>
#include <functional>
#include <locale>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <cmath>
#include <queue>
#include <ctime>
#include <cfloat>
#include <vector>
#include <string>
#include <cstdio>
#include <bitset>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <iomanip>
#include <sstream>
#include <utility>
#include <tr1/unordered_map>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 5010
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

int cerca[MAX];

int main()
{
	int n;
	while (scanf("%d", &n) && n)
	{
		int ft = false;
		REP(i, n)
		scanf("%d", &cerca[i]);
		if (cerca[0] == 0)
			ft = true;
		vector<int> dist;
		if (ft)
		{
			int j = n - 1;
			while (cerca[j] == 0 && j >= 0)
				j--;
			if (j < 0)
			{
				if (n * 2 % 4 == 0)
					printf("%d\n", (n * 2) / 4);
				else
					printf("%d\n", (n * 2) / 4 + 1);
			}
			else
			{
				int soma = 0, count = 0;
				while (count < n)
				{
					if (cerca[j] == 0)
					{
						soma += 2;
						while (count < n && cerca[j] == 0)
						{
							soma += 2;
							if (j == n - 1)
								j = 0;
							else
								j++;
							count++;
						}
						if (soma > 4)
							dist.pb(soma);
						soma = 0;
					}
					if (j == n - 1)
						j = 0;
					else
						j++;
					count++;
				}
				int resp = 0;
				REP(i, dist.size())
				if (dist[i] % 4 == 0)
					resp += (dist[i] / 4 - 1);
				else
					resp += dist[i] / 4;
				printf("%d\n", resp);
			}
		}
		else
		{
			int soma = 0;
			REP(i, n)
			if (cerca[i] == 0)
			{
				soma += 2;
				while (i < n && cerca[i] == 0)
				{
					soma += 2;
					i++;
				}
				if (soma > 4)
					dist.pb(soma);
				soma = 0;
			}
			int resp = 0;
			REP(i, dist.size())
			if (dist[i] % 4 == 0)
				resp += (dist[i] / 4 - 1);
			else
				resp += dist[i] / 4;

			printf("%d\n", resp);
		}
	}
	return 0;
}