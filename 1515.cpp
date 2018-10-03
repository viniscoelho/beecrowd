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
    while ( cin >> n && n )
    {
        priority_queue<is> pq;
        while ( n-- )
        {
            cin >> s >> y >> t;
            pq.push(mp(-(y-t), s));
        }
        cout << pq.top().second << endl;
    }
    return 0;
}