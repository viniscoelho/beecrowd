#include <iostream>
#include <algorithm>
#include <functional>
#include <locale>
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
#include <unordered_map>
#define FOR(i, a, b) for( int i = a; i <= b; ++i )
#define RFOR(i, b, a) for( int i = b; i >= a; --i )
#define REP(i, N) for( int i = 0; i < N; ++i )
#define MAX 110
#define pb push_back
#define mp make_pair

using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-9;
const double INF = 1e50;

struct pt;
typedef pair<pt, pt> line;
typedef vector<pt> polygon;
typedef pair<pt, int> ddi;
typedef pair<double, double> dd;

int readInt()
{
    bool minus = false;
    int result = 0;
    char ch = getchar_unlocked();
    while (true)
    {
        if (ch == '-') break;
        if (ch >= '0' && ch <= '9') break;
        ch = getchar_unlocked();
    }
    if (ch == '-') minus = true; else result = ch-'0';
    while (true)
    {
        ch = getchar_unlocked();
        if (ch < '0' || ch > '9') break;
        result = result*10 + (ch - '0');
    }
    if (minus) return -result;
    else return result;
}

//funcao de comparacao
int cmp( double a, double b = 0.0 )
{
    if ( fabs(a-b) < EPS ) return 0;
    return a > b ? 1 : -1;
}

//estrutura que representa um ponto
//ou um vetor dependendo da necessidade
struct pt
{
    double x, y;
    
    pt(double x = 0.0, double y = 0.0) : x(x), y(y) {}
    
    double length() { return sqrt(x*x + y*y); }
    double length2() { return x*x + y*y; }
    
    pt normalize(){ return (*this)/length(); }
    
    pt operator - (pt p){ return pt(x - p.x, y - p.y); }
    pt operator + (pt p){ return pt(x + p.x, y + p.y); }
    pt operator * (double k){ return pt(x * k, y * k); }
    pt operator / (double k){ return pt(x / k, y / k); }
    bool operator < (const pt& p) const
    {
        if ( fabs( x - p.x ) >= EPS ) return x < p.x;
        return y < p.y;
    }
    bool operator == (const pt p)
    {
        return ( fabs(x - p.x) < EPS && fabs(y - p.y) < EPS );
    }
};

vector<pt> circ(MAX);

// Funcoes basicas
double dist( pt a, pt b ){ return (a - b).length(); }
double dot( pt a, pt b ){ return a.x*b.x + a.y*b.y; }
double cross(pt a, pt b){ return a.x*b.y - a.y*b.x; }
double signed_area(pt a, pt b, pt c){ return cross((a-c),(b-c))/2.0; }

//Determina o lado que c esta em relacao ao vetor a->b
//1  -> left
//0  -> on
//-1 -> right
int side_sign(pt a, pt b, pt c){ return cmp(signed_area(a, b, c)); }
bool cw(pt a, pt b, pt c){ return cmp(signed_area(a, b, c)) > 0; }
bool ccw(pt a, pt b, pt c){ return cmp(signed_area(a, b, c)) < 0; }
bool colinear(pt a, pt b, pt c){ return !cmp(signed_area(a, b, c)); }

//testa se c esta na caixa limitada por a e b
bool in_box(pt a, pt b, pt c)
{
    return ( cmp(c.x, min(a.x, b.x)) >= 0 && cmp(c.x, max(a.x, b.x)) <= 0
        && cmp(c.y, min(a.y, b.y)) >= 0 && cmp(c.y, max(a.y, b.y)) <= 0 );
}

//determina o ponto mais proximo de c
//na reta ab
pt closest_point(pt a, pt b, pt c)
{
    //se colinares
    if ( fabs( signed_area(a, b, c) ) < EPS ) return c;
    pt dir = b-a;
    return a + ( dir*dot(dir, c-a)/dir.length2() );
}

//determina o ponto mais proximo de c
//no segmento ab
pt closest_point_seg(pt a, pt b, pt c)
{
    if ( fabs( signed_area(a, b, c) ) < EPS) return c;
    pt close = closest_point(a, b, c);
    if ( in_box(a, b, close) ) return close;
    return dist(a, c) < dist(b, c) ? a : b;
}

//retorna o angulo entre os vetores a->b e a->c
//angulo com sinal
double angle(pt a, pt b, pt c)
{
    pt va = b-a, v = c-a;
    pt vb(-va.y, va.x);
    return atan2( dot(v, vb), dot(v, va) );
}

//retorna o angulo entre os vetorre a-> e a->c
//angulo sem sinal
double angle_2(pt a, pt b, pt c)
{
    pt va = b-a, vb = c-a;
    return acos(dot(va, vb) / (va.length() * vb.length()));
}

//Lei dos cossenos determina - o angulo A
double angle(double a, double b, double c)
{
    return acos( (b*b + c*c - a*a)/(2.0*b*c) );
}

//gira a em torno da origem por theta radianos
pt rotate(pt a, double theta)
{
    return pt(cos(theta)*a.x - sin(theta)*a.y, sin(theta)*a.x + cos(theta)*a.y);
}

//gira b em torno de a por theta radianos
pt rotate(pt a, pt b, double theta){ return a + rotate(b-a, theta); }

//reflete c em torno de a->b
pt reflect(pt a, pt b, pt c)
{
    double theta = angle(a, b, c);
    return rotate(c-a, -2.0*theta) + a;
}

//verifica se o ponto c se encontra no segmento ab
bool point_and_seg(pt a, pt b, pt c)
{
    if ( !colinear(a, b, c) ) return false;
    return in_box(a, b, c); 
}

//interseccao entre as retas a->b e c->d e guarda em inter
bool intersect(pt a, pt b, pt c, pt d, pt& inter)
{
    double det = cross(b-a, d-c);
    if ( fabs(det) < EPS )
    {
        if ( fabs( signed_area(a, b, c) ) < EPS )
        {
            inter = pt(INF, INF); 
            return true; //retas coincidentes
        }
        return false; //retas paralelas
    }
    //retas concorrentes
    double ua = ( cross(d-c, a-c) )/det; //parametros (pode ser importante)
    inter = a + (b-a)*ua;
    return true;
}

//testa se exsite interseccao entre os dois segmentos
bool intersect_seg(pt a, pt b, pt c, pt d, pt& inter)
{
    if ( !intersect(a, b, c, d, inter) ) return false; //segmentos paralelos
    
    if ( inter == pt(INF, INF) )
        return in_box(a, b, min(c, d)) || in_box(c, d, min(a, b)); //segmentos sobrepostos
    return in_box(a, b, inter) && in_box(c, d, inter); //segmentos concorrentes
}

//intersecao entre reta e circunferencia
bool intersect(pt center, double r, pt a, pt b, pt& r1, pt& r2)
{
    pt close = closest_point(a, b, center);
    double x = dist(center, close);
    
    if ( cmp(x, r) > 0 ) return false;
    
    double d = sqrt(r*r - x*x);
    
    pt v = (b - a);
    r1 = close - (v*d/v.length());
    r2 = close + (v*d/v.length());
    return true;
}

//intersecao de ciucunferencias
bool intersect(pt c1, double r1, pt c2, double r2, pt& p1, pt& p2)
{
    double d = dist(c1, c2);
    if ( r1 < r2 )
    {
        swap(c1, c2); swap(r1, r2);
    }
    if ( cmp(d, r1+r2) > 0 || cmp(d, r1-r2) < 0 ) return false; //nao tem intersecao
    if ( !cmp(d) && !cmp(r1, r2) ) return true; //sao iguais
    
    pt v = c2 - c1;
    p1 = c1 + v*r1/v.length();
    if ( !cmp(d-r1-r2) || !cmp(d+r2-r1) ) //tengencia interna/externa
    {
        p2 = p1; return true;
    }
    
    double theta = angle(r2, d, r1);
    p2 = rotate(c1, p1, theta);
    p1 = rotate(c1, p1, -theta);
    return true;
}

double trap(pt& a, pt& b){ return 0.5*(b.x - a.x)*(b.y + a.y); }

double area(polygon& poly)
{
    double ret = 0.0;
    for ( int i = 0; i < poly.size(); i++ )
    {
        ret += trap(poly[i], poly[(i+1) % poly.size()]);
    }
    return fabs(ret);
}

double triangle_area(pt a, pt b, pt c){ return fabs(signed_area(a, b, c)); }

//Centro do circulo circunscrito
pt ccenter( pt a, pt b, pt c )
{
    pt r1 = (b + c)*0.5;
    pt r2 = (a + c)*0.5;
    
    pt s1(r1.x - (c.y - b.y), r1.y + (c.x - b.x));
    pt s2(r2.x - (c.y - a.y), r2.y + (c.x - a.x));
    pt cc;
    intersect(r1, s1, r2, s2, cc);
    return cc;
}

int main()
{
    int n;
    vector<pt> points;
    while ( (n = readInt()) && n )
    {
        for ( int i = 0; i < n; ++i )
        {
            circ[i].x = readInt();
            circ[i].y = readInt();
        }
        int qtd = 0;
        for ( int i = 0; i < n; ++i )
            for ( int j = i+1; j < n; ++j )
            {
                for ( int k = j+1; k < n; ++k )
                    if ( !colinear(circ[i], circ[j], circ[k]) ) points.pb(ccenter(circ[i], circ[j], circ[k]));
                sort(points.begin(), points.end());
                int m = 1;
                for ( int r = 0; r < points.size(); ++r )
                {
                    if ( r+1 < points.size() && points[r] == points[r+1] ) m++;
                    else
                    {
                        qtd = max(qtd, m);
                        m = 1;
                    }
                }
                points.clear();
            }
        printf("%d\n", qtd + 2);
    }
}
