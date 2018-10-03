#include <bits/stdc++.h>
#define ALL(V) V.begin(), V.end()
#define FORIT(i, a) for( TI(a) i = a.begin(); i != a.end(); i++ )
#define TI(X) __typeof((X).begin())

using namespace std;

int main()
{
    string cpf;
    while ( cin >> cpf )
    {
        vector<int> a(12);
        int j = 0;
        for (int i = 0; i < cpf.size(); i++)
            if ( isdigit(cpf[i]) ) a[j++] = cpf[i]-48;
        
        int sumA = 0, sumB = 0;
        for (int i = 1; i <= 9; i++)
            sumA += (a[i-1]*i);
        
        for (int i = 9, j = 1; i >= 1; i--, j++)
            sumB += (a[j-1]*i);
        
        int r1 = (sumA % 11) % 10, r2 = (sumB % 11) % 10;
        
        if ( r1 == a[9] && r2 == a[10] )
            cout << "CPF valido\n";
        else cout << "CPF invalido\n";
    }
    return 0;
}