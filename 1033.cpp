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
#include <iomanip>
#include <iostream>
#include <list>
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
#define MAXN 10000
#define pb push_back
#define mp make_pair

using namespace std;

typedef vector<int> vi;
typedef long long int64;
typedef unsigned long long uint64;

struct Matrix {
    int64 mat[2][2];
};

Matrix matMul(Matrix a, Matrix b, int64 m)
{
    Matrix ans;
    int i, j, k;
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
            for (ans.mat[i][j] = k = 0; k < 2; ++k)
                ans.mat[i][j] += (a.mat[i][k] * b.mat[k][j]) % m;
    return ans;
}

int64 matPow(Matrix base, int64 p, int64 m)
{
    Matrix ans;
    int i, j;
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
            ans.mat[i][j] = (i == j);
    while (p) {
        if (p & 1)
            ans = matMul(ans, base, m);
        base = matMul(base, base, m);
        p >>= 1;
    }
    return ans.mat[0][0];
}

int main()
{
    int t = 1;
    int64 a, b;
    while (scanf("%lld %lld", &a, &b) && a + b) {
        Matrix ans;
        ans.mat[0][0] = ans.mat[0][1] = ans.mat[1][0] = 1, ans.mat[1][1] = 0;
        if (a <= 1)
            printf("Case %d: %lld %lld 1\n", t++, a, b);
        else
            printf("Case %d: %lld %lld %lld\n", t++, a, b, (2 * matPow(ans, a, b) - 1) % b);
    }
    return 0;
}