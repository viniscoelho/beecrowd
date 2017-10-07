#include <bits/stdc++.h>
#define ALL(V) V.begin(), V.end()
#define FORIT(i, a) for( TI(a) i = a.begin(); i != a.end(); i++ )
#define TI(X) __typeof((X).begin())

using namespace std;

int matrix[110][110];

int main()
{
    ios::sync_with_stdio(false);
    int a;
    while ( cin >> a && a )
    {
        int b = 0, c = a, count = 1;
        for ( int i = 0; i < a; i++ )
        {
            for ( int j = b; j < c; j++ )
            {
                for ( int k = j; k < c; k++ )
                    matrix[j][k] = matrix[k][j] = count;
                matrix[j][j] = count;
            }
            b++, c--, count++;
        }
        
        for ( int j = 0; j < a; j++ )
        {
            for ( int k = 0; k < a; k++ )
                cout << ((k > 0) ? " " : "") << setw(3) << matrix[k][j];
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}