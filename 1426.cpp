#include <iostream>
#include <algorithm>
#include <functional>
#include <locale>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <cmath>
#include <queue>
#include <ctime>
#include <cfloat>
#include <vector>
#include <string>
#include <cstdio>
#include <bitset>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <iomanip>
#include <sstream>
#include <utility>
#include <unordered_map>
#define FOR(i, a, b) for( int i = a; i <= b; ++i )
#define RFOR(i, b, a) for( int i = b; i >= a; --i )
#define REP(i, N) for( int i = 0; i < N; ++i )
#define MAX 310
#define pb push_back
#define mp make_pair
 
using namespace std;
 
const double pi = acos(-1.0);
const double epsilon = 1e-17;
const double INF = 1e50;

int matrix[11][11];
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while ( t-- )
    {
        for ( int i = 0; i <= 8; i += 2 ) 
        {
            for ( int j = 0; j <= i; j += 2 )
                cin >> matrix[i][j];
        }

        for ( int i = 8; i > 0; i -= 2 )
        {
            for ( int j = 0; j <= i; j += 2 )
            {
                int a = matrix[i][j];
                int b = matrix[i][j+2];
                int c = matrix[i-2][j];
                matrix[i][j+1] = (c-a-b)/2;
                matrix[i-1][j] = a + matrix[i][j+1];
                matrix[i-1][j+1] = matrix[i][j+1] + b;
            }
        }

        for ( int i = 0; i <= 8; i++ ) 
        {
            for ( int j = 0; j <= i; j++ )
                cout << (j ? " " : "") << matrix[i][j];
            cout << endl;
        }
    }
    return 0;
}