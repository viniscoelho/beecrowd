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
#include <cctype>
#include <iomanip>
#include <sstream>
#include <utility>
#include <tr1/unordered_map>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 110
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

const double pi = acos(-1.0);
const double EPS = 1e-9;
const double INF = 1e50;

struct pt;
typedef pair<pt, pt> line;
typedef vector<pt> polygon;
typedef pair<pt, int> ddi;
typedef pair<double, double> dd;

int cmp(double a, double b = 0.0)
{
	if (fabs(a - b) < EPS)
		return 0;
	return a > b ? 1 : -1;
}

int velha[40][40][40], pos[40][40], player = 1;

int verificaJogo(int n, int i, int a, int b, int c)
{
	int x = 0, y = n - 1, dPrinc = 0, dSecun = 0, vert = 0, horiz = 0;
	for (int k = 0; k < n; ++k)
	{
		/* Verifica as diagonais */
		if (velha[i][k][k] == c)
			dPrinc++;

		if (velha[i][x][y] == c)
			dSecun++;
		x++, y--;

		/* Verifica a linha */
		if (velha[i][a][k] == c)
			horiz++;

		/* Verifica a coluna */
		if (velha[i][k][b] == c)
			vert++;
	}
	if (dPrinc == n)
		return c;
	else if (dSecun == n)
		return c;
	else if (vert == n)
		return c;
	else if (horiz == n)
		return c;
	return -1;
}

int main()
{
	int n, x, y, t = 0;
	while (scanf("%d", &n) && n)
	{
		printf("Instancia %d\n", ++t);
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
			{
				for (int k = 0; k < n; ++k)
					velha[i][j][k] = -1;
				pos[i][j] = 0;
			}
		int winner = -1;
		for (int i = 0; i < n * n * n; ++i)
		{
			scanf("%d %d", &x, &y);
			player = !player;
			if (winner != -1)
				continue;
			if (player)
				velha[pos[x - 1][y - 1]][x - 1][y - 1] = player;
			else
				velha[pos[x - 1][y - 1]][x - 1][y - 1] = player;
			winner = verificaJogo(n, pos[x - 1][y - 1]++, x - 1, y - 1, player);
		}
		if (winner == -1)
			puts("Empate\n");
		else
			printf("%s", (winner) ? "Branco ganhou\n\n" : "Azul ganhou\n\n");
	}
	return 0;
}
