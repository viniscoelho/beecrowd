#include <cstring>
#include <cstdio>
#include <iostream>

using namespace std;

char stack[1000];

int main()
{
	ios::sync_with_stdio(false);
	int i, j, n;
	string resp;
	while (getline(cin, resp))
	{
		int topo = 0, flag = 0;
		for (j = 0; j < resp.size(); ++j)
		{
			if (topo == 0 && (resp[j] == '(' || resp[j] == ')'))
			{
				stack[topo] = resp[j];
				topo++;
			}
			else if (stack[topo - 1] == '(' && resp[j] == ')')
				topo--;
			else if (resp[j] == '(' || resp[j] == ')')
			{
				stack[topo] = resp[j];
				topo++;
			}
		}
		if (topo != 0)
			cout << "incorrect\n";
		else
			cout << "correct\n";
	}
	return 0;
}
