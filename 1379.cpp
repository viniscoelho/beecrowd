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

typedef long long ll;
typedef pair<double, double> dd;

int main()
{
    ios::sync_with_stdio(false);
    int a, b;
    while (cin >> a >> b && a + b) {
        cout << (2 * a) - b << "\n";
    }
    return 0;
}
