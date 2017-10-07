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
#define pb push_back
#define mp make_pair

using namespace std;

struct no{
	int num, prev, next;
	no(int num = 0, int prev = 0, int next = 0): num(num), prev(prev), next(next){}
};

int main(){
	int a, cases, n, t = 1;
	scanf("%d", &cases);
	for ( ; t <= cases; ++t ){
		scanf("%d %d", &n, &a);
		vector<no> circ(n);
		if ( n != 1 ){
			circ[0] = no( 1, n-1, 1 );
			circ[n-1] = no( n, n-2, 0 );
		}
		else circ[0] = no( 1, 0, 0 );
		for ( int i = 1; i < n-1; ++i )
			circ[i] = no( i+1, i-1, i+1 );
		int c = n-1, qtd = n;
		while ( qtd > 1 ){
			for ( int i = 0; i < a; ++i ) c = circ[c].next;
			circ[circ[c].prev].next = circ[c].next;
			circ[circ[c].next].prev = circ[c].prev;
			c = circ[c].prev;
			qtd--;
		}
		printf("Case %d: %d\n", t, circ[c].num);
	}
	return 0;
}

