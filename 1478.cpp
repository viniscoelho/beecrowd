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
        int resp = 0;
        for ( int i = 0; i < a; i++ )
        {
            for ( int j = 0; j < a; j++ )
            {
                if ( i == j ) resp = 1;
                else resp = abs(i-j) + 1;
                cout << ((j > 0) ? " " : "") << setw(3) << resp;   
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}