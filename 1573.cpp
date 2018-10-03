#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#include <unordered_set>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;
//using namespace tr1;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int64;

typedef pair<int, string> is;

int readInt ()
{
    bool minus = false;
    int result = 0;
    char ch;
    ch = getchar_unlocked();
    while (true)
    {
        if (ch == '-') break;
        if (ch >= '0' && ch <= '9') break;
        ch = getchar_unlocked();
    }
    if (ch == '-') minus = true; else result = ch-'0';
    while (true)
    {
        ch = getchar_unlocked();
        if (ch < '0' || ch > '9') break;
        result = result*10 + (ch - '0');
    }
    if (minus) return -result;
    else return result;
}

int main()
{
    ios::sync_with_stdio(false);
    int a, b, c;
    while ( cin >> a >> b >> c && a + b + c )
    {
        cout << fixed << setprecision(0) << floor(cbrt(a*b*c)) << endl;
    }
    return 0;
}