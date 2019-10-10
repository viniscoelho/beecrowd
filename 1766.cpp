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

typedef pair<int, int> ii;
typedef pair<ii, string> iis;
typedef pair<double, double> dd;
typedef pair<string, string> ss;
typedef pair<int, iis> reinder;

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

int matrix[MAX][MAX];

int main()
{
    int t, m, n;
    t = readInt();
    for (int i = 1; i <= t; i++) {
        printf("CENARIO {%d}\n", i);
        m = readInt();
        n = readInt();
        vector<reinder> renas;
        string name;
        int w, age;
        double h;
        for (int j = 0; j < m; j++) {
            cin >> name >> w >> age >> h;
            renas.pb(mp(-w, mp(mp(age, h), name)));
        }
        sort(renas.begin(), renas.end());
        for (int j = 1; j <= n; j++) {
            printf("%d - %s\n", j, renas[j - 1].second.second.c_str());
        }
    }
    return 0;
}
