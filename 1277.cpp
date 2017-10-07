#include <iostream>
#include <algorithm>
#include <map>
#include <set>
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
#include <tr1/unordered_map>
#define FOR(i, a, b) for ( int i = a; i <= b; ++i )
#define RFOR(i, b, a) for ( int i = b; i >= a; --i )
#define REP(i, N) for ( int i = 0; i < N; ++i )
#define MAXN 110
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3FFFFFFFFFLL
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

typedef vector<int> vi;
typedef long long int64;
typedef unsigned long long uint64;
typedef pair<double, double> dd;
typedef pair<string, dd> sdd;

struct aluno{
	char name[110];
	double p, q;
};

vector<aluno> stu(MAXN);
char name[MAXN];

int main(){
	int a, t;
	scanf("%d", &t);
	while ( t-- ){
		scanf("%d", &a);
		REP ( i, a ){
			scanf(" %s", &stu[i].name);
			stu[i].p = stu[i].q = 0.;
		}
		int c = 0;
		REP ( i, a ){
			scanf(" %s", &name);
			int name_size = strlen(name);
			REP ( k, name_size ){
				if ( name[k] == 'P' || name[k] == 'A' ) stu[i].q++;
				if ( name[k] == 'P' ) stu[i].p++;
			}
			if ( !c && (stu[i].p/stu[i].q)*100 < 75 ){
				printf("%s", stu[i].name);
				c++;
			}
			else if ( c && (stu[i].p/stu[i].q)*100 < 75 ) printf(" %s", stu[i].name);
		}
		printf("\n");
    }
	
	return 0;
}