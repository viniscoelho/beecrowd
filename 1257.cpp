#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <string>
#include <cstring>
#include <cmath>
#include <map>
#define pb push_back
#define mp make_pair

using namespace std;

char resp[60];

int main(){
	int n, s;
	scanf("%d", &n);
	while ( n-- ){
		scanf("%d", &s);
		getchar();
		int sum = 0, resp_size;
		for ( int i = 0; i < s; ++i	){
			gets(resp);
			resp_size = strlen(resp);
			for ( int k = 0; k < resp_size; ++k ) sum += i + k + int(resp[k])-65;
		}
		printf("%d\n", sum);
		
	}
	return 0;
}

