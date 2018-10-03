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

char matrix[60][60];

int main()
{
    ios::sync_with_stdio(false);
    int n, m, a, b;
    while ( cin >> n )
    {
        vector<int> screws;
        for ( int i = 0; i < n; i++ )
        {
            cin >> a >> b;
            for ( int j = a; j <= b; j++ ) screws.pb(j);
        }
        sort(screws.begin(), screws.end());
        cin >> m;
        vector<int>::iterator lo = lower_bound(screws.begin(), screws.end(), m);
        vector<int>::iterator hi = upper_bound(screws.begin(), screws.end(), m);
        hi--;
        int last = (int)(hi-screws.begin());
        if ( lo == screws.end() || screws[last] != m ) cout << m << " not found\n";
        else cout << m << " found from " << (lo-screws.begin()) << " to " << (hi-screws.begin()) << endl; 
    }
    return 0;
}