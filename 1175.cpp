#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <map>
#include <vector>
#define mp make_pair
#define INF 0x3f3f3f3f

using namespace std;

int main(){
	int num[20];
	for ( int i = 0; i < 20; ++i )
		scanf("%d", &num[i]);
	for ( int i = 0, j = 19; i < 20; ++i, j-- )
		printf("N[%d] = %d\n", i, num[j]);
    return 0;
}
