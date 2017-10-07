/*
	Resolucao:
		Calcula o numero de jogos que foram empatados
		O resultado e numero de times menos o numero acoumulado de pontos dos
		times
*/

#include <string>
#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t, n, p;
    for ( cin >> t >> n; t != 0; cin >> t >> n ){
		string time;
		cin.ignore();
		int sum = 0;
		for ( int i = 0; i < t; ++i ){
			cin >> time >> p;
			sum += p;
		}
		cout << n*3-sum << "\n";
    }
    return 0;
}
