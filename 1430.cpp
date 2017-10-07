/*
	Resolucao:
		Verificar se a soma dos compassos e 1
*/

#include <iostream>
#include <algorithm>
#include <deque>
#include <queue>
#include <vector>
#include <list>
#include <set>
#include <string>
#include <tr1/unordered_map>
#include <bitset>
#include <stack>
#include <sstream>
#include <climits>
#include <cmath>
#define mp make_pair
#define pb push_back

using namespace std;
using namespace tr1;

typedef pair<int, char> ic;
typedef pair<int, ic> iic;

typedef long long int64;

int num;

int main(){
    ios::sync_with_stdio(false);
	string word;
	unordered_map<char, double> bib;
	bib.insert( mp('W', 1.0) );
	bib.insert( mp('H', 0.5) );
	bib.insert( mp('Q', 0.25) );
	bib.insert( mp('E', 0.125) );
	bib.insert( mp('S', 0.0625) );
	bib.insert( mp('T', 0.03125) );
	bib.insert( mp('X', 0.015625) );
	while ( getline(cin, word) && word != "*" ){
		double resp = 0;
		int cont = 0;
		for ( int i = 1; i < word.size(); ++i ){
			if ( word[i] != '/' ) resp += bib[ word[i] ];
			else{
				if ( resp == 1 ) cont++;
				resp = 0;
			}
		}
		cout << cont << "\n";
	}
    return 0;
}