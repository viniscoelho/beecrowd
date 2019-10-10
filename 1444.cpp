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

int drakes(double a)
{
	int val = 0;
	while (a != 1.0)
	{
		val += ceil(a / 3.0);
		a = ceil(a / 3.0);
	}

	return val;
}

int main()
{
	ios::sync_with_stdio(false);
	double a;
	while (cin >> a && a)
	{
		cout << drakes(a) << endl;
	}
	return 0;
}