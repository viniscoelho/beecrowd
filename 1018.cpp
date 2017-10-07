#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	int v, cem = 0, cinq = 0, vin = 0, dez = 0, cinc = 0, dois = 0;
    cin >> v;
	int div = v/100, um = v;
	if ( div >= 1 ){
		cem = div;
		um -= 100*cem;
	}
	div = um/50;
	if ( div >= 1 ){
		cinq = div;
		um -= 50*cinq;
	}
	div = um/20;
	if ( div >= 1 ){
		vin = div;
		um -= 20*vin;
	}
	div = um/10;
	if ( div >= 1 ){
		dez = div;
		um -= 10*dez;
	}
	div = um/5;
	if ( div >= 1 ){
		cinc = div;
		um -= 5*cinc;
	}
	div = um/2;
	if ( div >= 1 ){
		dois = div;
		um -= 2*dois;
	}
	cout << v << "\n";
	cout << cem << " nota(s) de R$ 100,00\n";
	cout << cinq << " nota(s) de R$ 50,00\n";
	cout << vin << " nota(s) de R$ 20,00\n";
	cout << dez << " nota(s) de R$ 10,00\n";
	cout << cinc << " nota(s) de R$ 5,00\n";
	cout << dois << " nota(s) de R$ 2,00\n";
	cout << um << " nota(s) de R$ 1,00\n";
	
    return 0;
}
