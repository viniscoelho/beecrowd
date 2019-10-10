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
    int a, b, c, d, n;
    cin >> n;
    cin >> a >> b;
    cin >> c >> d;
    if ((n >= a && n <= b) && (n >= c && n <= d))
        cout << "possivel\n";
    else
        cout << "impossivel\n";
}