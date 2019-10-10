#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 5010
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

int cmp(double a, double b = 0.0)
{
    if (fabs(a - b) < EPS)
        return 0;
    return a > b ? 1 : -1;
}

int resp[MAX];

int main()
{
    int a, b, c;
    FOR(i, 1, 5000)
    {
        c = i;
        bitset<10> bits;
        bool flag = false;
        while (c) {
            int d = c % 10;
            if (!bits[d])
                bits.set(d, 1);
            else {
                flag = true;
                break;
            }
            c /= 10;
        }
        if (!flag)
            resp[i] = 1;
        resp[i] += resp[i - 1];
    }
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%d\n", resp[b] - resp[a - 1]);
    }
    return 0;
}
