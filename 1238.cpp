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
typedef pair<int, string> is;
typedef pair<int, is> iis;
typedef long long int64;
typedef unsigned long long uint64;

int main()
{
    int t;
    scanf("%d", &t);
    char a[60], b[60];
    while (t--) {
        scanf(" %s %s", &a, &b);
        int i;
        for (i = 0; i < strlen(a); ++i)
            if (i < strlen(b))
                printf("%c%c", a[i], b[i]);
            else
                printf("%c", a[i]);
        for (; i < strlen(b); ++i)
            printf("%c", b[i]);
        printf("\n");
    }
    return 0;
}
