#include <cstring>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
    int i, j, k, l;
	cin >> i >> j >> k >> l;
	if ( i <= k ){
		if ( j <= l ) cout << "O JOGO DUROU " << k-i << " HORA(S) E " << l-j << " MINUTO(S)\n";
		else cout << "O JOGO DUROU " << k-i-1 << " HORA(S) E " << 60-j + l << " MINUTO(S)\n";
	}
	else{
		if ( j <= l ) cout << "O JOGO DUROU " << 24-i+k << " HORA(S) E " << l-j << " MINUTO(S)\n";
		else cout << "O JOGO DUROU " << 24-i+k-1 << " HORA(S) E " << 60-j + l << " MINUTO(S)\n";
	}
    return 0;
}
