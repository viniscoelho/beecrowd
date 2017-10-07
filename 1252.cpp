#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <list>
#include <set>
#include <string>
#include <map>
#include <sstream>
#include <iomanip>
#include <cstdio>
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f
#define INFLL 1000000000000000LL
#define MAX 220

using namespace std;

typedef vector<int> vi;
typedef long long int64;
typedef pair<int64, int64> ii;
typedef pair<ii, int64> ii3;

int64 a, b, c;

int main(){
	while ( scanf("%lld %lld", &a, &b) && a+b ){
		printf("%lld %lld\n", a, b);
		priority_queue<ii3> pq;
		for ( int i = 0; i < a; ++i ){
			scanf("%lld", &c);
			if ( abs(c) % 2 ) pq.push( mp( mp( -(c%b), 1 ), c ) );
			else pq.push( mp( mp( -(c%b), 0 ), -c ) );
		}
		while ( !pq.empty() ){
			if ( pq.top().first.second ) printf("%lld\n", pq.top().second);
			else printf("%lld\n", -pq.top().second);
			pq.pop();
		}
	}
	printf("%lld %lld\n", a, b);
    return 0;
}
