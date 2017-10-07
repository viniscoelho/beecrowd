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
#define FOR(i, a, b) for( int i = a; i <= b; ++i )
#define RFOR(i, b, a) for( int i = b; i >= a; --i )
#define REP(i, N) for( int i = 0; i < N; ++i )
#define RREP(i, N) for( int i = N-1; i >= 0; --i )
#define FORIT(i, a) for( TI(a) i = a.begin(); i != a.end(); i++ )
#define MAXN 10000
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3FFFFFFFFFLL
#define FILL(X, V) memset( X, V, sizeof(X) )
#define TI(X) __typeof((X).begin())
#define ALL(V) V.begin(), V.end()
#define SIZE(V) int((V).size())
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

struct tri{
	int atual, custo;
	tri ( int atual = 0, int custo = 0) : atual(atual), custo(custo) { }
};

int n;
typedef vector <int> vi;
typedef vector <vi> vii;
typedef vector <tri> vtri;
typedef vector <vtri> vvtri;
typedef long long int64;
typedef unsigned long long uint64;
const double EPS = 1e-9;

struct reta{
	int x1, y1, x2, y2;
	reta( int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0 ) : x1(x1) , y1(y1) , x2(x2) , y2(y2) {}
};

struct pt{
	double x, y;
	
	pt( double x = 0.0, double y = 0.0 ) : x(x), y(y) {}
	
	double length(){
		return sqrt(x*x + y*y);
	}
	
	double length2(){
		return x*x + y*y;
	}
	
	pt normalize(){
		return (*this)/length();
	}
	
	pt operator - (pt p){
		return pt( x - p.x, y - p.y );
	}
	
	pt operator + (pt p){
		return pt( x + p.x, y + p.y );
	}
	
	pt operator * (double k){
		return pt( x * k, y * k );
	}
	
	pt operator / (double k){
		return pt( x / k, y / k );
	}
	
	bool operator < (const pt& p) const{
		if(fabs( x - p.x ) >= EPS) return x < p.x;
		return y < p.y;
	}
	
	bool operator == (const pt p){
		return ( fabs(x - p.x) < EPS && fabs(y - p.y) < EPS );
	}
};

struct ponto{
	double x, y;
	ponto( double x = 0, double y = 0 ) : x(x) , y(y) {}
};

struct estado{
	double y1;
	ponto point;
	estado( double y1 = 0., ponto point = (0,0) ) : y1(y1), point(point) {} 
};

int cmp( double a, double b = 0.0 ){
	if ( fabs(a-b) < EPS ) return 0;
	return a > b ? 1 : -1;
}

double dist( pt a, pt b ){
	return (a - b).length();
}

double cross( pt a, pt b ){
	return a.x*b.y - a.y*b.x;
}

double signed_area( pt a, pt b, pt c ){
	return cross( (a-c), (b-c) )/2.0;
}

double dot( pt a, pt b ){
	return a.x*b.x + a.y*b.y;
}

bool in_box(pt a, pt b, pt c){
	return ( cmp( c.x, min(a.x, b.x) ) >= 0 && cmp( c.x, max(a.x, b.x) ) <= 0
		&& cmp( c.y, min(a.y, b.y) ) >= 0 && cmp( c.y, max(a.y, b.y) ) <= 0 );
}

bool intersect( pt a, pt b, pt c, pt d, pt& inter ){
	double det = cross(b-a, d-c);
	if ( fabs(det) < EPS ){
		if ( fabs(signed_area(a, b, c) ) < EPS ){
			inter = pt(INF, INF); 
			return true; //retas coincidentes
		}
		return false; //retas paralelas
	}
	//retas concorrentes
	double ua = ( cross(d-c, a-c) )/det; //parametros
	inter = a + (b-a)*ua;
	return true;
}
pt closest_point( pt a, pt b, pt c ){
	//se colinares
	if ( fabs( signed_area(a, b, c) ) < EPS ) return c;
	pt dir = b-a;
	return a + ( dir*dot(dir, c-a)/dir.length2() );
}
pt closest_point_seg( pt a, pt b, pt c ){
	if ( fabs( signed_area(a, b, c) ) < EPS ) return c;
	pt close = closest_point(a, b, c);
	if ( in_box(a, b, close) ) return close;
	return dist(a, c) < dist(b, c) ? a : b;
}
double dist2( ponto a, ponto b ){
	return sqrt( powl( (a.x - b.x), 2 ) + powl( (a.y - b.y), 2 ) );
}

int main(){
	int t;
	ponto parede;
	while ( scanf("%d", &t) != EOF ){
		scanf("%lf %lf", &parede.x, &parede.y);
		estado ant, at;
		scanf("%lf %lf %lf", &at.y1, &at.point.x, &at.point.y);
		ant.point.x = at.point.x, ant.y1 = at.y1, ant.point.y = at.point.y;
		double ans = dist2( at.point, ponto(parede.x, at.point.y) );
		FOR ( i, 1, t-1 ){
			scanf("%lf %lf %lf", &at.y1, &at.point.x, &at.point.y);
			if ( i & 1 ){ // anterior e par e o atual e impar
				ans = min(ans,dist2(ant.point,ponto(parede.x,ant.point.y)));
				ans = min(ans,dist2(ant.point,ponto(parede.x,at.y1)));
				ans = min(ans,dist2(ant.point,at.point));
				ans = min(ans,dist2(at.point,ponto(0,at.point.y)));
				pt m = closest_point_seg(pt(at.point.x,at.point.y),pt(parede.x,at.y1),pt(ant.point.x,ant.point.y));
				ans = min(ans,dist2(ant.point,ponto(m.x,m.y)));
			}
			else{
				ans = min(ans,dist2(ant.point,ponto(0,ant.point.y)));
				ans = min(ans,dist2(ant.point,ponto(0,at.y1)));
				ans = min(ans,dist2(ant.point,at.point));
				ans = min(ans,dist2(at.point,ponto(parede.x,at.point.y)));
				pt m = closest_point_seg(pt(0,at.y1), pt(at.point.x,at.point.y), pt(ant.point.x,ant.point.y));
				ans = min(ans,dist2(ant.point,ponto(m.x,m.y)));
			}
			ant.point.x = at.point.x, ant.y1 = at.y1, ant.point.y = at.point.y;
		}
		printf("%0.2lf\n", ans);
	}
	return 0;
}
