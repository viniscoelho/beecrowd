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
#include <iomanip>
#include <tr1/unordered_map>
#define pb push_back
#define mp make_pair
#define INF 0x3f3f3f3f
#define MAX 1010
#define REP(i, V) for( int i = 0; i < V; ++i )
#define REPIT(it, V) for( list<int>::iterator it = V.begin(); it != V.end(); ++it )

using namespace std;
using namespace tr1;

typedef pair<int, int> ii;
typedef pair<int, ii> ii3;

int main(){
	double a, b, c;
	while ( scanf("%lf %lf %lf", &a, &b, &c) != EOF ){
		double p = a + b + c; //perimetro triangulo
		double AT = sqrt( (p/2)*((p/2)-a)*((p/2)-b)*((p/2)-c) ); //area triangulo
		double RI = (2*AT)/p; //raio circulo inscrito
		double RC = (a*b*c)/sqrt( (a+b+c)*(b+c-a)*(c+a-b)*(a+b-c) ); //raio circulo circunscrito
		printf("%.4f %.4f %.4f\n", (RC*RC*acos(-1))-AT, AT-(RI*RI*acos(-1)), RI*RI*acos(-1));
	}
	return 0;
}

