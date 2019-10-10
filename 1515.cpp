#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int64;

typedef pair<int, string> is;

int main()
{
    ios::sync_with_stdio(false);
    double d;
    int n, y, t;
    string s;
    while (cin >> n && n) {
        priority_queue<is> pq;
        while (n--) {
            cin >> s >> y >> t;
            pq.push(mp(-(y - t), s));
        }
        cout << pq.top().second << endl;
    }
    return 0;
}