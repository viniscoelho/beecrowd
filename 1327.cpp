#include <iostream>
#include <algorithm>
#include <list>
#include <cmath>
#include <queue>
#include <vector>
#include <cstdio>
#include <climits>
#include <cstdlib>
#define FOR(i, a, b) for ( int i = a; i <= b; ++i )
#define RFOR(i, b, a) for ( int i = b; i >= a; --i )
#define REP(i, N) for ( int i = 0; i < N; ++i )
#define REPIT(c, it) for ( list<ii>::iterator it = c.begin(); it != c.end(); it++ )
#define MAX 30
#define INF 0x3F3F3F3F
#define pb push_back
#define mp make_pair

using namespace std;

typedef long long int64;
typedef pair<int, int> ii;
typedef vector<int> vi;

struct player{
	int card;
	char name[MAX];
};

int deck[52];

int main(){
	ios::sync_with_stdio(false);
	int n;
	while ( cin >> n && n ){
		queue<player> jogadores;
		player jogador;
		int count = n, j = 0;
		REP ( i, n ){
			cin >> jogador.name;
			jogadores.push(jogador);
		}
		REP ( i, 52 ) cin >> deck[i];
		while ( true ){
			int lower = 14;
			queue<player> queueAux, trash;
			if ( jogadores.size() > 52-j ) break;
			while ( !jogadores.empty() ){
				jogadores.front().card = deck[j];
				lower = min(deck[j++], lower);
				queueAux.push(jogadores.front());
				jogadores.pop();
			}
			while ( !queueAux.empty() ){
				if ( queueAux.front().card == lower ) trash.push(queueAux.front());
				else jogadores.push(queueAux.front());
				queueAux.pop();
			}
			if ( jogadores.empty() ){
				jogadores = trash;
				break;
			}
		}
		int r = 0;
		while ( !jogadores.empty() ){
			cout << jogadores.front().name << " ";
			jogadores.pop();
		}
		cout << "\n";
	}
	return 0;
}
