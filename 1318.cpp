#include <bits/stdc++.h>
#define FOR(i, a, b) for( int i = a; i <= b; ++i )
#define RFOR(i, b, a) for( int i = b; i >= a; --i )
#define REP(i, N) for( int i = 0; i < N; ++i )
#define MAX 5010
#define pb push_back
#define mp make_pair

using namespace std;

int main(){
	int m, n, c;
	while ( scanf("%d %d", &m, &n) && m+n ){
		unordered_map<int, bool> bilhete;
		int resp = 0;
		REP ( i, n ){
			scanf("%d", &c);
			if ( !bilhete.count(c) ) bilhete.insert( mp(c, true) );
			else if ( bilhete.count(c) && bilhete[c] ){
				resp++;
				bilhete[c] = false;
			}
		}
		printf("%d\n", resp);
	}

	return 0;
}