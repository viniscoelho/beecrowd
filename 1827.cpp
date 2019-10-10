#include <bits/stdc++.h>
#include <unordered_map>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 110
#define pb push_back
#define mp make_pair

using namespace std;

typedef long double double64;
const double pi = acos(-1.0);
const double64 epsilon = 1e-323;

/*
    Mathematical property:
    log(a^n) = n*log(a)
    log(n!) = SUM i = 1 to n, log(i) 
*/

int matrix[MAX][MAX];

int main()
{
    ios::sync_with_stdio(false);
    int n;
    while (cin >> n) {
        memset(matrix, 0, sizeof matrix);
        for (int i = 0; i < n; i++) {
            matrix[i][i] = 2; //diagonal principal
            matrix[i][n - i - 1] = 3; //diagonal secundaria
        }
        int pos = n / 3;
        for (int i = pos; i < n - pos; i++) {
            for (int j = pos; j < n - pos; j++)
                matrix[i][j] = 1;
        }
        matrix[n / 2][n / 2] = 4;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << matrix[i][j];
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}