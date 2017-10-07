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

int main()
{
	ios::sync_with_stdio(false);
	int t, n, p;
	cin >> t;
	for ( int i = 1; i <= t; i++ )
    {
        cin >> n;
        for ( int j = 1; j <= n; j++ )
        {
            cin >> p;
            if ( n == 1 || j == (n/2 + 1) )
            cout << "Case " << i << ": " << p << "\n";
        }
        
	}
}