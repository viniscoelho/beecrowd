#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <cstdio>
#include <algorithm>
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<int, int> prime_pot;
typedef long long int64;

int main(){
    int n, a;
	scanf("%d", &n);
    while ( n-- ){
		scanf("%d", &a);
		double fresh[a], sum = 0, qtd = 0;
		for ( int i = 0; i < a; ++i ){
			scanf("%lf", &fresh[i]);
			sum += fresh[i];
		}
		sum /= double(a);
		for ( int i = 0; i < a; ++i )
			if ( fresh[i] > sum ) qtd++;
		printf("%.3lf%%\n", (qtd/double(a))*100);
	}
    return 0;
}
