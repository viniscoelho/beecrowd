#include <iostream>
#include <algorithm>
#include <functional>
#include <locale>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <cmath>
#include <queue>
#include <ctime>
#include <cctype>
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

typedef long long ll;

char r[20], t[20];

int main(){
	int r_size, t_size;
	while ( gets(r) ){
		gets(t);
		string resp = "$";
		r_size = strlen(r), t_size = strlen(t);
		int j = r_size % 3;
		if ( j ){
			REP ( i, j ){
				resp += r[i];
			}
			if ( r_size > 3 ) resp += ",";
			else resp += ".";
		}
		for ( ; j < r_size; ++j ){
			REP ( i, 3 )
				resp += r[j++];
			j--;
			if ( j+1 < r_size ) resp += ",";
			else resp += ".";
		}
		if ( t_size == 1 ) resp += "0";
		resp += t;
		cout << resp << "\n";
	}
	
	return 0;
}