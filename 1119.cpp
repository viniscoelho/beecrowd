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
	int a, b, n;
	while ( scanf("%d %d %d", &n, &a, &b) && n+a+b ){
		vector<no> dole(n);
		if ( n != 1 ){
			dole[0] = no( 1, n-1, 1 );
			dole[n-1] = no( n, n-2, 0 );
		}
		else dole[0] = no( 1, 0, 0 );
		for ( int i = 1; i < n-1; ++i )
			dole[i] = no( i+1, i-1, i+1 );
		int c = n-1, d = 0, qtd = n;
		while ( qtd ){
			for ( int i = 0; i < a; ++i ) c = dole[c].next;
			for ( int i = 0; i < b; ++i ) d = dole[d].prev;
			if ( dole[c].num != dole[d].num ){
				if ( qtd-2 > 0 ) printf("%3d%3d,", dole[c].num, dole[d].num);
				else printf("%3d%3d", dole[c].num, dole[d].num);
				dole[dole[c].prev].next = dole[c].next;
				dole[dole[c].next].prev = dole[c].prev;
				dole[dole[d].prev].next = dole[d].next;
				dole[dole[d].next].prev = dole[d].prev;
				c = dole[c].prev;
				d = dole[d].next;
				qtd -= 2;
			}
			else if ( qtd == 1 && dole[c].num == dole[d].num ){
				printf("%3d", dole[c].num);
				qtd--;
			}
			else if ( dole[c].num == dole[d].num ){
				printf("%3d,", dole[c].num);
				dole[dole[c].prev].next = dole[c].next;
				dole[dole[c].next].prev = dole[c].prev;
				c = dole[c].prev;
				qtd--;
			}
		}
		printf("\n");
	}
	return 0;
}

