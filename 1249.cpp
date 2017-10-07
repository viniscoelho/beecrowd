#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <cctype>
#include <tr1/unordered_map>
#define mp make_pair
#define pf push_front
#define pb push_back

using namespace std;
using namespace tr1;

typedef long long int64;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;

unordered_map<char, char> bib;

int main(){
	ios::sync_with_stdio(false);
	bib['a'] = 'n';
	bib['b'] = 'o';
	bib['c'] = 'p';
	bib['d'] = 'q';
	bib['e'] = 'r';
	bib['f'] = 's';
	bib['g'] = 't';
	bib['h'] = 'u';
	bib['i'] = 'v';
	bib['j'] = 'w';
	bib['k'] = 'x';
	bib['l'] = 'y';
	bib['m'] = 'z';
	bib['n'] = 'a';
	bib['o'] = 'b';
	bib['p'] = 'c';
	bib['q'] = 'd';
	bib['r'] = 'e';
	bib['s'] = 'f';
	bib['t'] = 'g';
	bib['u'] = 'h';
	bib['v'] = 'i';
	bib['w'] = 'j';
	bib['x'] = 'k';
	bib['y'] = 'l';
	bib['z'] = 'm';
	string word;
	while ( getline(cin, word) ){
		for ( int i = 0; i < word.size(); ++i ){
			if ( isalpha(word[i]) ){
				if ( islower(word[i]) ) cout << bib[word[i]];
				else cout << char(toupper(bib[tolower(word[i])]));
			}
			else cout << word[i];
		}
		cout << "\n";
	}
	return 0;
}
