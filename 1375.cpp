#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#define mp make_pair
#define pb push_back
#define MAX 1010

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef unsigned long long int64;
vector<list<int>> race(1010);

int n, c, pos;

const int INF = 0x3f3f3f3f;

int main()
{
    ios::sync_with_stdio(false);
    bool flag = false;
    while (cin >> n && n) {
        if (flag)
            for (int i = 0; i < n; ++i)
                race[i].clear();
        bool fail = false;
        for (int i = 0; i < n; ++i) {
            cin >> c >> pos;
            if (pos < 0) {
                if (i + pos >= 0) {
                    race[i + pos].pb(c);
                    if (race[i + pos].size() > 1)
                        fail = true;
                } else
                    fail = true;
            } else if (pos >= 0) {
                if (i + pos < n) {
                    race[i + pos].pb(c);
                    if (race[i + pos].size() > 1)
                        fail = true;
                } else
                    fail = true;
            }
        }
        if (fail)
            cout << "-1\n";
        else {
            for (int i = 0; i < n; ++i) {
                if (i == 0)
                    cout << *(race[i].begin());
                else
                    cout << " " << *(race[i].begin());
            }
            cout << "\n";
        }
        flag = true;
    }
    return 0;
}
