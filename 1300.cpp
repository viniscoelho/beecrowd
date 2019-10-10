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
    int a;
    while (scanf("%d", &a) != EOF) {
        if (a % 6)
            printf("N\n");
        else
            printf("Y\n");
    }

    return 0;
}