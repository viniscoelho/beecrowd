#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#include <sstream>
#define mp make_pair
#define INF 0x3f3f3f3f

using namespace std;

int main()
{
	char a[11], b[11];
	while (scanf("%s %s", &a, &b) && (strcmp(a, "0") || strcmp(b, "0")))
	{
		int qtd = 0;
		if (strlen(a) >= strlen(b))
		{
			int carry = 0;
			for (int i = strlen(a) - 1, j = strlen(b) - 1; i >= 0; --i, --j)
			{
				if (j >= 0)
				{
					if (a[i] - 48 + b[j] - 48 + carry > 9)
					{
						carry = 1;
						qtd++;
					}
					else
						carry = 0;
				}
				else if (a[i] - 48 + carry > 9)
				{
					carry = 1;
					qtd++;
				}
				else
					carry = 0;
			}
		}
		else
		{
			int carry = 0;
			for (int i = strlen(a) - 1, j = strlen(b) - 1; j >= 0; --i, --j)
			{
				if (i >= 0)
				{
					if (a[i] - 48 + b[j] - 48 + carry > 9)
					{
						carry = 1;
						qtd++;
					}
					else
						carry = 0;
				}
				else if (b[j] - 48 + carry > 9)
				{
					carry = 1;
					qtd++;
				}
				else
					carry = 0;
			}
		}
		if (!qtd)
			printf("No carry operation.\n");
		else if (qtd == 1)
			printf("1 carry operation.\n");
		else
			printf("%d carry operations.\n", qtd);
	}
	return 0;
}
