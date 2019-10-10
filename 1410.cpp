/*
	Resolucao:
		A ideia e verificar se a posicao de um atacante � maior que
		a posicao que os dois ultimos defensores.
		Se tiver um deles que esta apos os defensores, ele esta impedido.
*/

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <list>
#include <set>
#define mp make_pair
#define pb push_back

using namespace std;

int a, d;
int ata[12];

int main()
{
	ios::sync_with_stdio(false);
	while (cin >> a >> d && a + d)
	{
		priority_queue<int> pq;
		int def, def1, def2;
		for (int i = 0; i < a; ++i)
			cin >> ata[i];
		for (int i = 0; i < d; ++i)
		{
			cin >> def;
			pq.push(-def);
		}
		def1 = -pq.top();
		pq.pop();
		def2 = -pq.top();
		pq.pop();
		bool flag = false;
		for (int i = 0; i < a; i++)
		{
			if (ata[i] >= def2 || (ata[i] >= def1 && ata[i] >= def2))
				;
			else
			{
				cout << "Y\n";
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << "N\n";
	}

	return 0;
}
