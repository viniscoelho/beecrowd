#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)

using namespace std;

struct tri {
    int atual, custo;
    tri(int atual = 0, int custo = 0)
        : atual(atual)
        , custo(custo)
    {
    }
};

typedef vector<int> vi;
typedef long long int64;
typedef unsigned long long uint64;

int visited[100], start[100], vis = 1;

int main()
{
    int t, pos, ans;
    while (scanf("%d", &t) != EOF) {
        REP(i, t)
        scanf("%d", &start[i]);
        ans = 0;
        REP(i, t)
        {
            scanf("%d", &pos);
            visited[pos] = vis;
            REP(j, t)
            {
                if (start[j] == pos)
                    break;
                if (visited[start[j]] != vis)
                    ans++;
            }
        }
        printf("%d\n", ans);
        vis++;
    }
    return 0;
}
