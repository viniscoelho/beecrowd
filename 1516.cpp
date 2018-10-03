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
    while ( cin >> n >> m && n+m )
    {
        for ( int i = 0; i < n; i++ )
            for ( int j = 0; j < m; j++ )
                cin >> matrix[i][j];
        cin >> a >> b;
        for ( int i = 0; i < n; i++ )
        {
            string s = "";
            for ( int j = 0; j < m; j++ )
            {
                for ( int k = 0; k < b/m; k++ )
                    s += matrix[i][j];
            }
            for ( int k = 0; k < a/n; k++ )
                cout << s << endl;
        }
        cout << endl;
    }
    return 0;
}