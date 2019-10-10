#include <iostream>
#include <algorithm>

using namespace std;

int M, N, L;
int H[10010], V[10010];

int solve(int x, int y, int vet[])
{
	int largura = 0, tabuas = 0;
	while (vet[x] > 0 && largura < (y * 100))
	{
		vet[x]--;
		tabuas++;
		largura += L;
	}
	int i, j;
	for (i = 1, j = x - 1; i < j; i++, j--)
	{
		while (vet[i] > 0 && vet[j] > 0 && largura < (y * 100))
		{
			vet[i]--;
			vet[j]--;
			tabuas += 2;
			largura += L;
		}
	}
	if (i == j && largura < (y * 100))
	{
		while (vet[i] > 1 && largura < (y * 100))
		{
			vet[i] -= 2;
			tabuas += 2;
			largura += L;
		}
	}
	if (largura != (y * 100))
		return -1;
	else
		return tabuas;
}

int main()
{
	ios::sync_with_stdio(false);
	int M, N;
	while (cin >> M >> N && M && N)
	{
		int NT, aux;
		cin >> L >> NT;

		for (int i = 0; i < 10010; i++)
			H[i] = V[i] = 0;
		for (int i = 0; i < NT; i++)
		{
			cin >> aux;
			H[aux]++;
			V[aux]++;
		}
		if ((M * 100) % L == 0 || (N * 100) % L == 0)
		{
			int vertical, horizontal;
			vertical = solve(M, N, H);
			horizontal = solve(N, M, V);
			if (vertical != -1)
			{
				if (horizontal != -1)
					cout << min(vertical, horizontal) << "\n";
				else
					cout << vertical << "\n";
			}
			else if (horizontal != -1)
				cout << horizontal << "\n";
			else
				cout << "impossivel\n";
		}
		else
			cout << "impossivel\n";
	}
	return 0;
}
