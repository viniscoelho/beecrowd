#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

const double INF = 0x3f3f3f3f;

int main()
{
    ios::sync_with_stdio(false);
    int m, n, t;
    while (cin >> n && n)
    {
        cin >> m;
        double ruas[n + 1][n + 1], p;
        int a, b;
        for (int i = 1; i < n + 1; ++i)
        {
            for (int j = i; j < n + 1; ++j)
                ruas[i][j] = ruas[j][i] = 0.0;
            ruas[i][i] = 1.0;
        }
        for (int i = 0; i < m; ++i)
        {
            cin >> a >> b >> p;
            ruas[a][b] = ruas[b][a] = p / 100.00;
        }
        for (int k = 1; k < n + 1; ++k)
            for (int i = 1; i < n + 1; ++i)
                for (int j = 1; j < n + 1; ++j)
                    if ((ruas[i][k] * ruas[k][j]) != 0)
                        ruas[i][j] = max(ruas[i][j], (ruas[i][k] * ruas[k][j]));
        cout << fixed << setprecision(6) << ruas[1][n] * 100.0 << " percent\n";
    }
    return 0;
}
