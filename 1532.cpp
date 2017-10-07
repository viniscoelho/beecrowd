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
#define FOR(i, a, b) for( int i = a; i <= b; ++i )
#define RFOR(i, b, a) for( int i = b; i >= a; --i )
#define REP(i, N) for( int i = 0; i < N; ++i )
#define MAX 110
#define pb push_back
#define mp make_pair

using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-9;
const double INF = 1e50;

struct pt;
typedef pair<pt, pt> line;
typedef vector<pt> polygon;
typedef pair<pt, int> ddi;
typedef pair<double, double> dd;
typedef pair<string, string> ss;

int readInt()
{
    bool minus = false;
    int result = 0;
    char ch = getchar_unlocked();
    while (true)
    {
        if (ch == '-') break;
        if (ch >= '0' && ch <= '9') break;
        ch = getchar_unlocked();
    }
    if (ch == '-') minus = true; else result = ch-'0';
    while (true)
    {
        ch = getchar_unlocked();
        if (ch < '0' || ch > '9') break;
        result = result*10 + (ch - '0');
    }
    if (minus) return -result;
    else return result;
}

int matrix[MAX][MAX];

int main()
{
    int d, v;
    while ( scanf("%d %d", &d, &v) && d+v )
    {
        bool flag = false;
        for ( int k = v; k >= 1; k-- )
        {
            int temp = 0;
            while ( v )
            {
                for ( int i = 0; i < v; i++ )
                {
                    temp += v;
                    if ( temp == d )
                    {
                        printf("possivel\n");
                        flag = true;
                        break;
                    }
                }
                if ( flag ) break;
                v--;
            }
            if ( flag ) break;
            v = k;
        }
        if ( !flag ) printf("impossivel\n");
    }
    return 0;
}
