/*
	Resolucao:
		Cria um vetor para os soldados da esquerda
		e da direita
		A cada uma das queries, a direita da esquerda do soldado da esquerda
		vira a direita do soldado da direita
		e a esquerda da direita do soldado da direita
		vira a esquerda do soldado da esquerda
            
*/

#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int s, b, l, r;
    for ( cin >> s >> b; s != 0 && b != 0; cin >> s >> b ){
        int dirsold[s+2], esqsold[s+2];
        for ( int i = 1; i < s+2; ++i ){
            dirsold[i] = i+1;
            esqsold[i] = i-1;
        }
        for ( int i = 0; i < b; ++i ){
            cin >> l >> r;
            dirsold[esqsold[l]] = dirsold[r];
            esqsold[dirsold[r]] = esqsold[l];
            if ( esqsold[dirsold[r]] < 1 ) cout << "* ";
            else cout << esqsold[dirsold[r]] << " ";
            if ( dirsold[esqsold[l]] > s ) cout << "*\n";
            else cout << dirsold[esqsold[l]] << "\n";
        }
        cout << "-\n";
    }
    return 0;
}
