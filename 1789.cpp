#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <cstring>
#include <climits>
#define pb push_back
#define mp make_pair

using namespace std;

const int INF = INT_MAX;
typedef long long int64;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    while ( cin >> t )
    {
        int slug, m = 0;
        for ( int i = 0; i < t; i++ )
        {
            cin >> slug;
            if ( slug < 10 ) m = max(m, 1);
            else if ( slug < 20 ) m = max(m, 2);
            else if ( slug >= 20 ) m = max(m, 3);
        }
        cout << m << "\n";
    }
    return 0;
}