//#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#define ALL(V) V.begin(), V.end()
#define FORIT(i, a) for (TI(a) i = a.begin(); i != a.end(); i++)
#define TI(X) __typeof((X).begin())

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  int a;
  while (cin >> a)
    cout << ((a == 0) ? "vai ter copa!" : "vai ter duas!") << "\n";
  return 0;
}