#include <algorithm>
#include <bitset>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <locale>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
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
    while (true) {
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
    while (true) {
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

int matrix[4][4];
int dir[][2] = { { 1, 0 }, { 0, -1 }, { 0, 1 }, { -1, 0 } };
set<string> resp;
vector<string> bib;

void hasMovement(int x, int y)
{
    for (int i = 0; i < 4; i++) {
        int x1 = x + dir[i][0];
        int y1 = y + dir[i][1];
        if (x1 < 0 || x1 >= 4 || y1 < 0 || y1 >= 4)
            continue;
        if (matrix[x][y] == matrix[x1][y1])
            resp.insert(bib[i]);
        else if (!matrix[x1][y1])
            resp.insert(bib[i]);
    }
}

int main()
{
    int n;
    n = readInt();
    bib.pb("DOWN");
    bib.pb("LEFT");
    bib.pb("RIGHT");
    bib.pb("UP");
    while (n--) {
        bool flag = false;
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++) {
                matrix[i][j] = readInt();
                if (matrix[i][j] == 2048)
                    flag = true;
            }

        if (!flag)
            for (int i = 0; i < 4; i++)
                for (int j = 0; j < 4; j++)
                    if (matrix[i][j])
                        hasMovement(i, j);
        if (resp.size()) {
            set<string>::iterator it;
            for (it = resp.begin(); it != resp.end(); it++)
                if (it != resp.begin())
                    printf(" %s", (*it).c_str());
                else
                    printf("%s", (*it).c_str());
            printf("\n");
        } else
            printf("NONE\n");
        resp.clear();
    }
    return 0;
}
