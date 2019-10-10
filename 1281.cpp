#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 5010
#define pb push_back
#define mp make_pair

using namespace std;

char nome[60];

int main()
{
    int t, n, a;
    double preco;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        unordered_map<string, double> feira;
        REP(i, n)
        {
            scanf(" %s %lf", &nome, &preco);
            feira[nome] = preco;
        }
        scanf("%d", &n);
        double resp = 0.0;
        REP(i, n)
        {
            scanf(" %s %d", &nome, &a);
            resp += feira[nome] * a;
        }
        printf("R$ %.2lf\n", resp);
    }
    return 0;
}