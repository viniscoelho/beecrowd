#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#define mp make_pair
#define MAX 200

using namespace std;

typedef pair<int, int> ii;

char a[2010];

int main(){
	int h;
	scanf("%d", &h);
	getchar();
	while ( h-- ){
		scanf(" %[^\n]", a);
		int a_size = strlen(a);
		for ( int i = 0; i < a_size; ++i ){
			if ( a[i] == '0' ){
				int qtd = 0;
				while ( a[i] == '0' ){
					while ( a[i] == '0' && qtd < 255 ){
						i++, qtd++;
					}
					if ( qtd == 255 ){
						printf("#%c", 255);
						qtd = 0;
					}
				}
				if ( qtd == 1 ) printf("0");
				else if ( qtd == 2 ) printf("00");
				else printf("#%c", qtd);
				i--;
			}
			else if ( a[i] == ' ' ){
					int qtd = 0;
					while ( a[i] == ' ' ){
						while ( a[i] == ' ' && qtd < 255 ){
							i++, qtd++;
						}
						if ( qtd == 255 ){
							printf("$%c", 255);
							qtd = 0;
						}
					}
					if ( qtd == 1 ) printf(" ");
					else if ( qtd == 2 ) printf("  ");
					else printf("$%c", qtd);
					i--;
			}
			else printf("%c", a[i]);
		}
		printf("\n");
	}
	return 0;
}
