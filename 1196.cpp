#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <cmath>
#include <queue>
#include <ctime>
#include <cfloat>
#include <vector>
#include <string>
#include <cstdio>
#include <bitset>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <iomanip>
#include <sstream>
#include <utility>
#include <tr1/unordered_map>
#define FOR(i, a, b) for ( int i = a; i <= b; ++i )
#define RFOR(i, b, a) for ( int i = b; i >= a; --i )
#define REP(i, N) for ( int i = 0; i < N; ++i )
#define MAXN 10000
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

typedef vector <int> vi;
typedef pair<int, string> is;
typedef pair<int, is> iis;
typedef long long int64;
typedef unsigned long long uint64;
unordered_map<char, char> bib;

int main(){	
	ios::sync_with_stdio(false);
	bib[' '] = ' ';
	bib['/'] = '.';
	bib['.'] = ',';
	bib[','] = 'M';
	bib['M'] = 'N';
	bib['N'] = 'B';
	bib['B'] = 'V';
	bib['V'] = 'C';
	bib['C'] = 'X';
	bib['X'] = 'Z';
	bib['Z'] = '\'';
	bib['\''] = ';';
	bib[';'] = 'L';
	bib['L'] = 'K';
	bib['K'] = 'J';
	bib['J'] = 'H';
	bib['H'] = 'G';
	bib['G'] = 'F';
	bib['F'] = 'D';
	bib['D'] = 'S';
	bib['S'] = 'A';
	bib['A'] = '\\';
	bib['\\'] = ']';
	bib[']'] = '[';
	bib['['] = 'P';
	bib['P'] = 'O';
	bib['O'] = 'I';
	bib['I'] = 'U';
	bib['U'] = 'Y';
	bib['Y'] = 'T';
	bib['T'] = 'R';
	bib['R'] = 'E';
	bib['E'] = 'W';
	bib['W'] = 'Q';
	bib['Q'] = '=';
	bib['='] = '-';
	bib['-'] = '0';
	bib['0'] = '9';
	bib['9'] = '8';
	bib['8'] = '7';
	bib['7'] = '6';
	bib['6'] = '5';
	bib['5'] = '4';
	bib['4'] = '3';
	bib['3'] = '2';
	bib['2'] = '1';
	bib['1'] = '`';
	string a;
	while ( getline(cin , a) ){
		for ( int i = 0; i < a.size(); ++i ) cout << bib[a[i]];
		cout << "\n";
	}
	return 0;
}
