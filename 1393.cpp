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
#define MAX 1000010
#define pb push_back
#define mp make_pair

using namespace std;

typedef vector<int> vi;
typedef long long int64;
typedef unsigned long long uint64;

uint64 fib[50];

void fibonacci()
{
    int64 f, f1, f2;
    fib[0] = 0;
    fib[1] = fib[2] = 1;
    f1 = f2 = 1;
    FOR(i, 3, 50)
    {
        f = f1 + f2;
        fib[i] = f;
        f1 = f2;
        f2 = f;
    }
}

int main()
{
    register int t;
    fibonacci();
    while (scanf("%d", &t) && t) {
        printf("%lld\n", fib[t + 1]);
    }
    return 0;
}