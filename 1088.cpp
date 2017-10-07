/*
	Resolucao:
		Algoritmo que simula e gera o numero minimo de swaps necessarios
		para ordenar um array de numeros. Complexidade O(n)
		Se for par, Carlos ganha; senão Marcelo ganha
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
#include <cstdio>
#define mp make_pair
#define pb push_back
#define MAXV 100010

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;

int number[MAXV], pos[MAXV];

int main(){
	ios::sync_with_stdio(false);
	int a, n;
	while ( cin >> n && n ){
		int qtd = 0;
		for ( int i = 0; i < n; i++ ){
			cin >> a;
			number[i] = a-1;
			pos[a-1] = i;
		}
		for ( int i = 0; i < n; i++ ){
			if ( number[i] != i ){
				number[pos[i]] = number[i];
				pos[number[i]] = pos[i];
				number[i] = pos[i] = i;
				qtd++;
			}
		}
		if ( qtd % 2 == 0 ) cout << "Carlos\n";
		else cout << "Marcelo\n";
	}
	return 0;
}
