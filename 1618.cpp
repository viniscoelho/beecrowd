#include <iostream>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <map>
#include <unordered_set>
#define mp make_pair
#define pb push_back
#define MAXV 200100
#define PI 3.14159
#define TWOPI 2*PI

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef long long int64;

typedef struct {
	int x, y;
} point;

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	while ( n-- )
	{
		point p[4], r;
		for ( int i = 0; i < 4; i++ )
			cin >> p[i].x >> p[i].y;
		cin >> r.x >> r.y;
		if( r.x >= p[0].x && r.y >= p[0].y && r.x <= p[1].x && r.y >= p[1].y
			&& r.x <= p[2].x && r.y <= p[2].y && r.x >= p[3].x && r.y <= p[3].y )
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}