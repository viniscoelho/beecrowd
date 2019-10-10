#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <string>
#include <cstring>
#include <cmath>
#include <map>
#define pb push_back
#define mp make_pair

using namespace std;

struct no
{
	int prev, next, num;
	char nome[60];
};

no summer[110];

int main()
{
	int i, n;
	while (scanf("%d", &n) && n)
	{
		scanf(" %s %d", &summer[0].nome, &summer[0].num);
		if (n > 1)
		{
			summer[0].prev = n - 1;
			summer[0].next = 1;
			summer[n - 1].prev = n - 2;
			summer[n - 1].next = 0;
		}
		else
			summer[0].prev = summer[0].next = 0;
		for (i = 1; i < n - 1; ++i)
		{
			scanf(" %s %d", &summer[i].nome, &summer[i].num);
			summer[i].prev = i - 1;
			summer[i].next = i + 1;
		}
		if (n > 1)
			scanf(" %s %d", &summer[n - 1].nome, &summer[n - 1].num);
		int a = summer[0].num, c = 0, qtd = n;
		while (qtd != 1)
		{
			if (!(a & 1))
				for (i = 0; i < a; ++i)
					c = summer[c].prev;
			else
				for (i = 0; i < a; ++i)
					c = summer[c].next;
			a = summer[c].num;
			summer[summer[c].prev].next = summer[c].next;
			summer[summer[c].next].prev = summer[c].prev;
			qtd--;
		}
		printf("Vencedor(a): %s\n", summer[summer[c].next].nome);
	}
	return 0;
}
