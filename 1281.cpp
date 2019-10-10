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

char nome[60];

int main()
{
	int t, n, a;
	double preco;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		unordered_map<string, double> feira;
		REP(i, n)
		{
			scanf(" %s %lf", &nome, &preco);
			feira[nome] = preco;
		}
		scanf("%d", &n);
		double resp = 0.0;
		REP(i, n)
		{
			scanf(" %s %d", &nome, &a);
			resp += feira[nome] * a;
		}
		printf("R$ %.2lf\n", resp);
	}
	return 0;
}