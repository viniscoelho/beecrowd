#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 5010
#define pb push_back
#define mp make_pair

using namespace std;

int main()
{
    int r;
    while (scanf("%d", &r) && r) {
        int a = 0, b = 0, c, d;
        REP(i, r)
        {
            scanf("%d %d", &c, &d);
            if (c > d)
                a++;
            else if (d > c)
                b++;
        }
        printf("%d %d\n", a, b);
    }

    return 0;
}