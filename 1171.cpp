#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <list>
#include <cmath>
#include <map>
#define mp make_pair
#define pb push_back

using namespace std;

typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;

int main(){
    ios::sync_with_stdio(false);
	int a, n;
    map<int, int> num;
	map<int, int>::iterator it;
	pair<map<int, int>::iterator, bool> ret;
	cin >> n;
	while ( n-- ){
		cin >> a;
		ret = num.insert( mp(a, 1) );
		if ( !ret.second ) num[a]++;
	}
	for ( it = num.begin(); it != num.end(); ++it )
		cout << it->first << " aparece " << it->second << " vez(es)\n";
    return 0;
}
