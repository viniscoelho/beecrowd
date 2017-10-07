/*
	Resolucao:
		Algoritmo que simula e gera o numero minimo de swaps necessarios
		para ordenar um array de numeros. Complexidade O(n)
*/

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <map>
#include <cstdlib>
#define mp make_pair
#define pb push_back
#define MAXV 10100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;

int number[MAXV], posicao[MAXV];

int main(){
	ios::sync_with_stdio(false);
	int m, n, a;
	cin >> m;
	while ( m-- ){
		int qtd = 0;
		cin >> n;
		for ( int i = 0; i < n; i++ ){
			cin >> a;
			number[i] = a-1;
			posicao[a-1] = i;
		}
		for ( int i = 0; i < n; i++ ){
			if ( number[i] != i ){
				number[posicao[i]] = number[i];
				posicao[number[i]] = posicao[i];
				number[i] = posicao[i] = i;
				qtd++;
			}
		}
		cout << qtd << "\n";
	}
}
