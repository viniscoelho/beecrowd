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
	double line[12][12], sum = 0;
	char c;
	int lcs = 12, lci = 4;
	bool flag = false;
	scanf(" %c", &c);
	for ( int i = 0; i < 12; ++i ){
		for ( int j = 0; j < 12; ++j ){
			scanf("%lf", &line[i][j]);
			if ( lcs < 5 ){
				if ( j <= lcs && ( i > 0 && i < 11 ) ) sum += line[i][j];
			}
			else{
				flag = true;
				if ( j <= lci && ( i > 0 && i < 11 ) ) sum += line[i][j];
			}
		}
		if ( flag ) lci--;
		else lcs++;
	}
	if ( c == 'S' ) printf("%.1lf\n", sum);
	else printf("%.1lf\n", sum/12);
    return 0;
}
