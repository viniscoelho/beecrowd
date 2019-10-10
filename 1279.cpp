#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 110
#define pb push_back
#define mp make_pair

using namespace std;

typedef long long int64;

char number[100010];

int main()
{
	int t = 0;
	while (scanf(" %s", &number) != EOF)
	{
		if (t++)
			printf("\n");
		int64 fourh = 0, one = 0, four = 0, fiftyf = 0, fift = 0;
		for (int j = 0; j < strlen(number) - 1; ++j)
		{
			if (!j)
				one = (number[j] - 48) * 10 + (number[j + 1] - 48);
			else
				one = ((one % 100) * 10) % 100 + (number[j + 1] - 48);
			if (!j)
				fourh = (number[j] - 48) * 10 + (number[j + 1] - 48);
			else
				fourh = ((fourh % 400) * 10) % 400 + (number[j + 1] - 48);
			if (!j)
				four = (number[j] - 48) * 10 + (number[j + 1] - 48);
			else
				four = ((four % 4) * 10) % 4 + (number[j + 1] - 48);
			if (!j)
				fiftyf = (number[j] - 48) * 10 + (number[j + 1] - 48);
			else
				fiftyf = ((fiftyf % 55) * 10) % 55 + (number[j + 1] - 48);
			if (!j)
				fift = (number[j] - 48) * 10 + (number[j + 1] - 48);
			else
				fift = ((fift % 15) * 10) % 15 + (number[j + 1] - 48);
		}
		int flag = false, f = false;
		if (fourh % 400 == 0)
		{
			printf("This is leap year.\n");
			f = flag = true;
		}
		else if (fourh % 4 == 0 && one % 100 != 0)
		{
			printf("This is leap year.\n");
			f = flag = true;
		}
		if (fift % 15 == 0)
		{
			printf("This is huluculu festival year.\n");
			flag = true;
		}
		if (fiftyf % 55 == 0)
		{
			if (f)
			{
				printf("This is bulukulu festival year.\n");
				flag = true;
			}
		}
		if (!flag)
			printf("This is an ordinary year.\n");
	}
	return 0;
}