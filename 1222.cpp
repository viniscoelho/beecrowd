#include <set>
#include <tr1/unordered_map>
#include <map>
#include <list>
#include <stack>
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
#include <iostream>
#include <algorithm>
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

typedef vector <int> vi;
typedef long long int64;
typedef unsigned long long uint64;

char frase[100000], copia[10000], *p;

int main(){
	int n, l, c, linha, qnt, tam;
	while ( scanf("%d %d %d", &n, &l, &c) != EOF ){
		tam = qnt = 0;
		linha = 1;
		scanf(" %[^\n]s", frase);
		p = strtok(frase, " ");
		qnt += strlen(p);
		p = strtok(NULL, " ");
		while ( p != NULL ){
			tam = strlen(p);
			p = strtok(NULL, " ");
			if ( tam + 1 + qnt <= c ) qnt += tam + 1;
			else{
				linha++;
				qnt = tam;
			}
		}
		printf("%d\n", int( ceil( double(linha)/double(l) ) ) );
	}
	return 0;
}
