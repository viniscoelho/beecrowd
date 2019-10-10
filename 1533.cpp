#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <string>
#include <cstring>
#include <sstream>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <stack>
#include <map>
#define mp make_pair
#define pb push_back
#define MAXV 200100
#define PI 3.14159
#define TWOPI 2 * PI

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef long long int64;

int main()
{
    ios::sync_with_stdio(false);
    int a, b, x, y;
    while (cin >> a && a)
    {
        vector<ii> matches;
        for (int i = 0; i < a; i++)
        {
            cin >> x;
            matches.pb(mp(x, i + 1));
        }
        sort(matches.begin(), matches.end());

        cout << matches[matches.size() - 2].second << endl;
    }
    return 0;
}