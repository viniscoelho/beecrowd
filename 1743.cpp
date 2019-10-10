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
#include <sstream>
#include <stack>
#include <string>
#include <unordered_set>
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
    vector<int> plug;
    int n;
    bool resp = true;
    for (int i = 0; i < 5; i++) {
        cin >> n;
        plug.pb(n);
    }
    for (int i = 0; i < 5; i++) {
        cin >> n;
        if (n == plug[i])
            resp = false;
    }
    cout << ((resp) ? "Y\n" : "N\n");
    return 0;
}