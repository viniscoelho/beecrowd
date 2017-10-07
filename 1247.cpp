/*
	Resolucao:
		Determinar se a razao da velocidade f do fugitivo pela distancia, que e dada por f/12
		e menor ou igual que a razao da velocidade g da guarda pela distancia t, que e dada por g/t
		t e a do triangulo t d 12
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    double d, f, g;
    while ( cin >> d >> f >> g ){
		double t = sqrt( d*d + 144 );
		if ( f/12 <= g/t ) cout << "S\n";
		else cout << "N\n";
    }
    return 0;
}
