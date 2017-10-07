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
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3FFFFFFFFFLL
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

typedef vector <int> vi;
typedef vector <char> vc;
typedef long long int64;
typedef unsigned long long uint64;

vc perm(30), obj(30);

int main(){
	int num, n;
	while ( scanf("%d", &num) && num ){
		for ( int i = 0; i < num; ++i ) scanf(" %c", &perm[i]);
		for ( int i = 0; i < num; ++i ) scanf(" %c", &obj[i]);
		stack<char> temp;
		int pos = 0;
		for ( int i = 0; i < num; ++i ){
			if ( !temp.empty() && temp.top() == obj[i] ){
				temp.pop();
				printf("R");
			}
			else{
				while ( pos < num && obj[i] != perm[pos] ){
					temp.push(perm[pos++]);
					printf("I");
				}
				if ( pos < num && perm[pos] == obj[i] ){
					printf("IR");
					pos++;
				}
				else break;
			}
		}
		if ( !temp.empty() ) printf(" Impossible");
		printf("\n");
	}
	return 0;
}
