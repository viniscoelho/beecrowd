#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
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
    while (cin >> a && a) {
        vector<ii> matches;
        for (int i = 0; i < a; i++) {
            cin >> x;
            matches.pb(mp(x, i + 1));
        }
        sort(matches.begin(), matches.end());

        cout << matches[matches.size() - 2].second << endl;
    }
    return 0;
}