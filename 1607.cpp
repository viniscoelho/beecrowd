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
    int a, b;
    cin >> a;
    while ( a-- )
    {
        string x, y;
        cin >> x >> y;
        int sum = 0;
        for ( int i = 0; i < x.size(); i++ )
        {
            if ( x[i] <= y[i] ) sum += (int)(y[i] - x[i]);
            else sum += ((int)(y[i])+26 - (int)x[i]);
        }
        cout << sum << endl;
    }
    return 0;
}