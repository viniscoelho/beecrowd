#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef unsigned long long int64;

int64 matrix[30][30];

int numDigits(int64 number)
{
    int digits = 0;
    while (number) {
        number /= 10LL;
        digits++;
    }
    return digits;
}

int main()
{
    ios::sync_with_stdio(false);
    int t, n;
    cin >> t;
    for (int caso = 4; caso <= t + 3; caso++) {
        if (caso - 4 > 0)
            cout << "\n";
        cout << "Quadrado da matriz #" << caso << ":\n";
        cin >> n;
        //memset(resp, 0, sizeof resp);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> matrix[i][j];
        map<int, int> width;
        for (int i = 0; i < n; i++) {
            int col = 0;
            for (int j = 0; j < n; j++) {
                matrix[j][i] *= matrix[j][i];
                col = max(col, numDigits(matrix[j][i]));
            }
            width.insert(mp(i, col));
        }

        /* Multiplicao de matrizes
        for ( int k = 0; k < n; k++ )
            for ( int i = 0; i < n; i++ )
                for ( int j = 0; j < n; j++ )
                    resp[k][i] += matrix[k][j]*matrix[j][i];
        */
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << ((j) ? " " : "") << setw(width[j]) << matrix[i][j];
            cout << "\n";
        }
    }
    return 0;
}