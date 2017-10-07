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
    int a, b, x, y;
    while ( cin >> a >> b )
    {
        vector<int> matches;
        int64 pontos = 0;
        for ( int i = 0; i < a; i++ )
        {
            cin >> x >> y;
            if ( x-y <= 0 ) matches.pb(abs(x-y));
            else pontos += 3;
        }
        sort(matches.begin(), matches.end());
        for ( int i = 0; i < matches.size(); i++ )
        {
            if ( b != 0 && b-(matches[i]+1) >= 0 )
            {
                b -= (matches[i]+1);
                pontos += 3;
            }
            else if ( b-matches[i] >= 0 )
            {
                b -= matches[i];
                pontos++;
            }
        }
        cout << pontos << endl;
    }
    return 0;
}