#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <string>
#include <cstring>
#include <cmath>
#include <map>
#include <tr1/unordered_map>
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

int main(){
	ios::sync_with_stdio(false);
	int n, t = 0;
	cin >> n;
	cin.ignore();
	while ( n-- ){
		string word;
		map<char, bool> bib;
		map<char, bool>::iterator it;
		getline(cin, word);
		for ( int i = 0; i < word.size(); ++i ) bib.insert( mp(word[i], true) );
		getline(cin, word);
		bool flag = false;
		for ( int i = 0; i < word.size(); ++i )
			if ( bib.count(word[i]) && bib[word[i]] ) bib[word[i]] = false;
			else if ( bib.count(word[i]) && !bib[word[i]] ) flag = true;
			else if ( !(bib.count(word[i])) ) flag = true;
		getline(cin, word);
		for ( int i = 0; i < word.size(); ++i )
			if ( bib.count(word[i]) && bib[word[i]] ) bib[word[i]] = false;
			else if ( bib.count(word[i]) && !bib[word[i]] ) flag = true;
			else if ( !(bib.count(word[i])) ) flag = true;
		if ( !flag ){
			for ( it = bib.begin(); it != bib.end(); ++it ) if ( it->second ) cout << it->first;
		}
		else cout << "CHEATER";
		cout << "\n";
	}
	return 0;
}

