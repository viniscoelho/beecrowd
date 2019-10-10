#include <bits/stdc++.h>
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

int main()
{
    int n;
    n = readInt();
    char s[110];
    for (int i = 1; i <= n; i++) {
        int l, bs, iv, ev;
        scanf("%s %d", s, &l);
        printf("Caso #%d: %s nivel %d\n", i, s, l);
        for (int i = 0; i < 4; i++) {
            bs = readInt();
            iv = readInt();
            ev = readInt();
            double calc = floor(((iv + bs + sqrt(ev) / 8.0) * l) / 50.0) + 5.0;
            switch (i) {
            case 0: {
                calc = floor(((iv + bs + sqrt(ev) / 8.0 + 50) * l) / 50.0) + 10.0;
                printf("HP: %.0lf\n", calc);
            } break;
            case 1:
                printf("AT: %.0lf\n", calc);
                break;
            case 2:
                printf("DF: %.0lf\n", calc);
                break;
            case 3:
                printf("SP: %.0lf\n", calc);
                break;
            }
        }
    }
    return 0;
}
