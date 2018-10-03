#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <iomanip>
#define pb push_back
#define mp make_pair

using namespace std;

typedef unsigned long long int64;

char matrix[60][60];

int hailstone(int st)
{
	int hailstone_max = -1;
	while (true)
	{ 
		hailstone_max = max(st, hailstone_max);
		if (1 == st) break; 
		st = (st & (1 << 0)) ? (3 * st + 1) : (st / 2);
	}
	return hailstone_max;
}

int main()
{
	ios::sync_with_stdio(false);
	int a;
	while ( cin >> a && a )
	{
		cout << hailstone(a) << endl;
	}
	return 0;
}