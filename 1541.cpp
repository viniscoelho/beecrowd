#include <bits/stdc++.h>
#define ALL(V) V.begin(), V.end()
#define FORIT(i, a) for (TI(a) i = a.begin(); i != a.end(); i++)
#define TI(X) __typeof((X).begin())

using namespace std;

int matrix[110][110];

int main()
{
    ios::sync_with_stdio(false);
    int a, b, c;

    while (cin >> a && a) {
        cin >> b >> c;
        double A = a, B = b, C = c;
        if (c == 100)
            cout << fixed << setprecision(0) << floor(sqrt((A * B))) << "\n";
        else
            cout << fixed << setprecision(0) << floor(sqrt((A * B * 100.0) / C)) << "\n";
    }
    return 0;
}