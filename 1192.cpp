#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <list>
#include <cmath>
#include <map>
#include <cstdio>
#define mp make_pair
#define pb push_back

using namespace std;

typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;

int main(){
	char a[3];
	int n;
	scanf("%d", &n);
	getchar();
	while ( n-- ){
		scanf(" %[^\n]", a);
		int x = a[0]-48, y = a[2]-48;
		if ( a[0] == a[2] ) printf("%d\n", x*y);
		else if ( a[1] <= 'Z' ) printf("%d\n", y-x);
		else printf("%d\n", x+y);
	}
    return 0;
}
