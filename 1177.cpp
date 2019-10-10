#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <map>
#define mp make_pair
#define INF 0x3f3f3f3f

using namespace std;
typedef long long int64;

int main()
{
	int a, b = -1;
	scanf("%d", &a);
	for (int i = 0; i < 1000; ++i)
	{
		printf("N[%d] = %d\n", i, (b + 1) % a);
		b++;
	}
	return 0;
}
