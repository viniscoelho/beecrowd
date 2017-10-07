#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <map>
#include <vector>
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f

using namespace std;
typedef long long int64;

int main(){
	int a, b, i = 0, menor = INF, pos = 0;
	scanf("%d", &a);
	while ( a-- ){
		scanf("%d", &b);
		if ( b < menor ){
			menor = b;
			pos = i;
		}
		i++;
	}
	printf("Menor valor: %d\nPosicao: %d\n", menor, pos);
    return 0;
}
