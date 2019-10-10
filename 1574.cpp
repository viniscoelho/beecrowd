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

map<int, string> coord;
int ans = 0;

void doIt(int k, string &buf)
{
    if (buf == "LEFT")
    {
        coord.insert(mp(k, buf));
        ans--;
    }
    else if (buf == "RIGHT")
    {
        coord.insert(mp(k, buf));
        ans++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int t, p, pos;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> p;
        string buf;
        ans = 0;
        for (int k = 1; k <= p; k++)
        {
            cin >> buf;
            if (buf == "SAME")
            {
                cin >> buf >> pos;
                doIt(k, coord[pos]);
            }
            else
                doIt(k, buf);
        }
        cout << ans << "\n";
        coord.clear();
    }
    return 0;
}