#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
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

map<int, int> offices;

int main()
{
    ios::sync_with_stdio(false);
    int q, e;
    cin >> q >> e;
    for (int i = 0; i < e; i++) {
        int x;
        cin >> x;
        offices[x] = i;
    }

    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        if (offices.count(x))
            cout << "0\n";
        else {
            offices[x] = 0;
            cout << "1\n";
        }
    }

    return 0;
}