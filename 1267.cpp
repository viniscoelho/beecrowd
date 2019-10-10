#include <bits/stdc++.h>
#define FOR(i, a, b) for( int i = a; i <= b; ++i )
#define RFOR(i, b, a) for( int i = b; i >= a; --i )
#define REP(i, N) for( int i = 0; i < N; ++i )
#define MAX 1000010
#define pb push_back
#define mp make_pair

using namespace std;

typedef vector<int> vi;
typedef long long int64;
typedef unsigned long long uint64;

int bib[510][110], alumn[110];

int main(){
	int a, b;
	while ( scanf("%d %d", &a, &b) && a+b ){
		REP ( i, a ) alumn[i] = 1;
		REP ( i, b ){
			REP ( k, a ){
				scanf("%d", &bib[i][k]);
				alumn[k] &= bib[i][k];
			}
		}
		int f = false;
		REP ( i, a ){
			if ( alumn[i] & 1 ){
				printf("yes\n");
				f = !f;
				break;
			}
		}
		if ( !f ) printf("no\n");
	}
	return 0;
}