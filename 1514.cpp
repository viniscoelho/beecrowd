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
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
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
        if (ch == '-')
            break;
        if (ch >= '0' && ch <= '9')
            break;
        ch = getchar_unlocked();
    }
    if (ch == '-')
        minus = true;
    else
        result = ch - '0';
    while (true)
    {
        ch = getchar_unlocked();
        if (ch < '0' || ch > '9')
            break;
        result = result * 10 + (ch - '0');
    }
    if (minus)
        return -result;
    else
        return result;
}

int matrix[MAX][MAX];

int main()
{
    int m, n;
    while (scanf("%d %d", &m, &n) && m + n)
    {
        int cond[] = {1, 1, 1, 1};

        for (int i = 0; i < m; i++)
        {
            int a = 0, b = 0;
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = readInt();
                a += matrix[i][j];
                b |= matrix[i][j];
            }
            if (a - n == 0)
                cond[0] = 0;
            cond[3] &= b;
        }
        for (int j = 0; j < n; j++)
        {
            int a = 0, b = 1;
            for (int i = 0; i < m; i++)
            {
                a |= matrix[i][j];
                b &= matrix[i][j];
            }
            cond[1] &= a;
            if (b)
                cond[2] = 0;
        }
        printf("%d\n", cond[0] + cond[1] + cond[2] + cond[3]);
    }
    return 0;
}
