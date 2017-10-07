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
int weight[MAX], value[MAX];

int fill_sack ( int items, int maxWeight ){
    int dp[items+1][maxWeight+1];
    for ( int i = 0; i <= maxWeight; i++ ) dp[0][i] = 0;
    for ( int i = 0; i <= items; i++ ) dp[i][0] = 0;
    for ( int i = 1; i <= items; i++ )
        for ( int j = 0; j <= maxWeight; j++ ){
            dp[i][j] = dp[i-1][j]; /* If I do not take this item */
            if ( j-weight[i] >= 0 ){
				/* suppose if I take this item */
				dp[i][j] = max( dp[i][j] , dp[i-1][j-weight[i]] + value[i] );
            }
        }
    return dp[items][maxWeight];
}


int main(){
    ios::sync_with_stdio(false);
    int c, f;
    for ( cin >> f; f != 0; cin >> f ){
		cin >> c;
        for ( int i = 1; i <= f; i++ )
            cin >> value[i] >> weight[i];
        cout << fill_sack(f, c) << " min.\n";
    }
	return 0;
}
