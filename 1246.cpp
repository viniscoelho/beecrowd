/*
	Resolucao:
		Uso de estrutura de dados Lista
		Verifica se um carro pode ser inserido no estacionamento
		caso haja uma vaga que o encaixe
		Se o carro e removido, adiciona 10 a resposta
*/

#include <iostream>
#include <algorithm>
#include <list>
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<int, int> ii;

bool insere_carro( list<ii>& est, int placa, int tam ){
	for ( list<ii>::iterator i = est.begin(); i != est.end(); ++i ){
		if ( i->first == 0 ) {
            if ( i->second > tam ){
				ii novo = mp(0, i->second - tam);
				i->first = placa;
				i->second = tam;
				est.insert(++i, novo);
				return true;
            }
            else{
				if ( i->second == tam ){
					i->first = placa;
                    i->second = tam;
                    return true;
				}
			}
		}
	}
	return false;
}

void remove_carro( list<ii>& est, int placa ){
	list<ii>::iterator esq, dir, i;
	i = est.begin();
	esq = i;
	while ( i != est.end() && i->first != placa ){
		esq = i;
		i++;
	}
	if ( i == est.end() ) return;
	dir = ++i;
	--i;
	i->first = 0;
	if ( dir != est.end() && dir->first == 0 ){
		i->second = i->second + dir->second;
        est.erase(dir);
	}
	if ( esq != i && esq->first == 0 ){
		esq->second = esq->second + i->second;
        est.erase(i);
	}
}

int main() {
    ios::sync_with_stdio(false);
    int c, n, placa, tam;
    char opc;
    while ( cin >> c >> n ){
		int out = 0;
		list<ii> est;
		est.pb( mp(0, c) );
		for ( int i = 0; i < n; ++i ){
			cin >> opc;
			if ( opc == 'C' ){
				cin >> placa >> tam;
				if ( insere_carro(est, placa, tam) ) out += 10;
			}
			else{
				cin >> placa;
				remove_carro(est, placa);
			}
		}
		cout << out << endl;
    }
    return 0;
}
