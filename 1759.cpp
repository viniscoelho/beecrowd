//#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#define ALL(V) V.begin(), V.end()
#define FORIT(i, a) for( TI(a) i = a.begin(); i != a.end(); i++ )
#define TI(X) __typeof((X).begin())

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int a;
    cin >> a;
    
    for ( int i = 0; i < a; i++ )
        cout << ((i != 0) ? " " : "") << "Ho";
    cout << "!\n";
    return 0;
}