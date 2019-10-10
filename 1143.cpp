#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstdio>

using namespace std;
typedef long long int64;

int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; ++i)
		printf("%d %d %d\n", i, i * i, i * i * i);
	return 0;
}
