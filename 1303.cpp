#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 5010
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<int, int> ii;
typedef pair<int, double> id;
typedef pair<id, ii> idii;

struct no {
    int pontos, part;
    double marc, sofr;
};

no order[110];

int main()
{
    int a, c, n, t = 1;
    double b, d;
    while (scanf("%d", &n) && n) {
        if (t > 1)
            printf("\n");
        printf("Instancia %d\n", t++);
        vector<idii> resp;
        REP(i, n)
        {
            order[i].pontos = order[i].part = 0;
            order[i].marc = order[i].sofr = 0.;
        }
        REP(i, (n * (n - 1) / 2))
        {
            scanf("%d %lf %d %lf", &a, &b, &c, &d);
            if (b > d) {
                order[a - 1].pontos += 2;
                order[c - 1].pontos += 1;
            } else {
                order[c - 1].pontos += 2;
                order[a - 1].pontos += 1;
            }
            order[a - 1].part++;
            order[c - 1].part++;
            order[a - 1].marc += b;
            order[a - 1].sofr += d;
            order[c - 1].marc += d;
            order[c - 1].sofr += b;
        }
        REP(i, n)
        resp.pb(mp(mp(order[i].pontos, double(order[i].marc / order[i].sofr)), mp(order[i].part, i + 1)));
        sort(resp.begin(), resp.end());
        c = 0;
        for (int i = resp.size() - 1; i >= 0; --i)
            printf("%d ", resp[i].second.second);
        printf("\n");
    }

    return 0;
}