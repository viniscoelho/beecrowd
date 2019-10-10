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
    int n;
    while (cin >> n && n) {
        for (int i = 1; i <= n; i++) {
            double a, b, c;
            cin >> a >> b >> c;
            cout << "Size #" << i << ":\n";
            cout << "Ice Cream Used: " << fixed << setprecision(2) << a * ((b + c) * 5.0) / 2.0 << " cm2\n";
        }
        cout << "\n";
    }
    return 0;
}