#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <string>
#include <cstring>
#include <sstream>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <unordered_set>
#define mp make_pair
#define pb push_back
#define MAXV 200100
#define PI 3.14159
#define TWOPI 2*PI

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef long long int64;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    while ( cin >> n && n )
    {
        for ( int i = 1; i <= n; i++ )
        {
            double a, b, c;
            cin >> a >> b >> c;
            cout << "Size #" << i << ":\n";
            cout << "Ice Cream Used: " << fixed << setprecision(2) << a*((b+c)*5.0)/2.0 << " cm2\n";
        }
        cout << "\n";
    }
    return 0;
}