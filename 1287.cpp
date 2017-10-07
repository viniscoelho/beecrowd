#include <iostream>
#include <algorithm>
#include <functional>
#include <locale>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <cctype>
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
#define FOR(i, a, b) for( int i = a; i <= b; ++i )
#define RFOR(i, b, a) for( int i = b; i >= a; --i )
#define REP(i, N) for( int i = 0; i < N; ++i )
#define MAX 5010
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

typedef long long int64;

char word[60];

int main(){
	while ( gets(word) ){
		int word_size = strlen(word);
		string resp;
		bool flag = false;
		REP ( i, word_size ){
			if ( isdigit(word[i]) ) resp += word[i];
			else if ( word[i] == 'l' ) resp += '1';
			else if ( word[i] == 'o' || word[i] == 'O' ) resp += '0';
			else if ( word[i] != ' ' && word[i] != ',' ){
					flag = true;
					break;
			}
		}
		istringstream buffer(resp);
		int64 num;
		buffer >> num;
		if ( flag || !resp.size() || num > 2147483647 ) puts("error");
		else cout << num << "\n";
	}
	return 0;
}