#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <map>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int64;

int r(int x, int y)
{
    return pow(3 * x, 2) + pow(y, 2);
}

int b(int x, int y)
{
    return 2 * pow(x, 2) + pow(5 * y, 2);
}

int c(int x, int y)
{
    return -100 * x + pow(y, 3);
}

void getWinner(int x, int y)
{
    int d = r(x, y), e = b(x, y), f = c(x, y);
    int resp = max(d, max(e, f));
    if (resp == d)
        cout << "Rafael ganhou\n";
    else if (resp == e)
        cout << "Beto ganhou\n";
    else if (resp == f)
        cout << "Carlos ganhou\n";
}

int main()
{
    ios::sync_with_stdio(false);
    int t, n, p, x, y;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> x >> y;
        getWinner(x, y);
    }
}