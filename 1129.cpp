#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    for ( cin >> n; n != 0; cin >> n ){
        for ( int i = 0; i < n; ++i ){
            int cont = 0, pos = 0, q;
            for ( int j = 0; j < 5; ++j ){
                cin >> q;
                if ( q <= 127 ){
                   cont++; pos = j;
                }
            }
            if ( cont == 0 || cont > 1 ) cout << "*\n";
            else if ( cont == 1 ) cout << char('A'+pos) << "\n";
        }
    }
    return 0;
}