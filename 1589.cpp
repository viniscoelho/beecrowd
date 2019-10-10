//#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <algorithm>
#define ALL(V) V.begin(), V.end()
#define FORIT(i, a) for (TI(a) i = a.begin(); i != a.end(); i++)
#define TI(X) __typeof((X).begin())
#define mp make_pair

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int t, a, b;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}
