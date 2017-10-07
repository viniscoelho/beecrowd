#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>
#define mp make_pair
#define pb push_back

using namespace std;

int m;

typedef unsigned long long uint64;
typedef pair<int, int> ii;

int main(){
	ios::sync_with_stdio(false);
	string str;
	map<string, int> dic;
	map<string, int>::iterator dc;
    while ( getline(cin, str) ){
		for ( int i = 0; i < str.size(); i++ ){
			string resp;
			while ( str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z' ){
				char a = tolower(str[i]);
				resp += a, i++;
			}
			if ( resp.size() && !dic.count(resp) ) dic.insert( mp(resp, 0) );
		}
	}
	for ( dc = dic.begin(); dc != dic.end(); dc++ ) cout << dc->first << "\n";
	return 0;
}

