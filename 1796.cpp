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

int main()
{
    ios::sync_with_stdio(false);
    int n, x;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }
    if (sum >= ceil((double)n / 2.0))
        cout << "N\n";
    else
        cout << "Y\n";
}