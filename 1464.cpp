#include <algorithm>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-9;
const double INF = 1e50;

struct pt;
typedef pair<pt, pt> line;
typedef vector<pt> polygon;

//funcao de comparacao
int cmp(double a, double b = 0.0)
{
    if (fabs(a - b) < EPS)
        return 0;
    return a > b ? 1 : -1;
}

//estrutura que representa um ponto
//ou um vetor dependendo da necessidade
struct pt {
    double x, y;

    pt(double x = 0.0, double y = 0.0)
        : x(x)
        , y(y)
    {
    }

    double length()
    {
        return sqrt(x * x + y * y);
    }
    double length2()
    {
        return x * x + y * y;
    }

    pt normalize()
    {
        return (*this) / length();
    }

    pt operator-(pt p)
    {
        return pt(x - p.x, y - p.y);
    }
    pt operator+(pt p)
    {
        return pt(x + p.x, y + p.y);
    }
    pt operator*(double k)
    {
        return pt(x * k, y * k);
    }
    pt operator/(double k)
    {
        return pt(x / k, y / k);
    }
    bool operator<(const pt& p) const
    {
        if (fabs(x - p.x) >= EPS)
            return x < p.x;
        return y < p.y;
    }
    bool operator==(const pt p)
    {
        return (fabs(x - p.x) < EPS && fabs(y - p.y) < EPS);
    }
};

double dist(pt a, pt b)
{
    return (a - b).length();
}

double dot(pt a, pt b)
{
    return a.x * b.x + a.y * b.y;
}

double cross(const pt& o, const pt& a, const pt& b)
{
    return (a.x - o.x) * (b.y - o.y) - (a.y - o.y) * (b.x - o.x);
}

pt refer;

void convex_hull(polygon P, polygon& hull)
{
    int n = P.size(), k = 0;
    hull.resize(2 * n);
    // Sort Points lexicographically
    sort(P.begin(), P.end());
    // Build lower hull
    for (int i = 0; i < n; ++i) {
        while (k >= 2 && (int)cross(hull[k - 2], hull[k - 1], P[i]) < 0)
            k--;
        hull[k++] = P[i];
    }
    // Build upper hull
    for (int i = n - 2, t = k + 1; i >= 0; i--) {
        while (k >= t && (int)cross(hull[k - 2], hull[k - 1], P[i]) < 0)
            k--;
        hull[k++] = P[i];
    }
    hull.resize(k);
    hull.pop_back();
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    while (cin >> n && n) {
        double a, b;
        polygon t, hull;
        while (n--) {
            cin >> a >> b;
            t.push_back(pt(a, b));
        }
        int sum = 0;
        while (t.size() != 0) {
            convex_hull(t, hull);
            sort(t.begin(), t.end());
            sort(hull.begin(), hull.end());
            if (hull.size())
                sum++;
            int i = 0, j = 0;
            while (i < hull.size()) {
                if (hull[i] == t[j]) {
                    t.erase(t.begin() + j);
                    i++;
                } else
                    j++;
            }
        }
        if (sum % 2)
            cout << "Take this onion to the lab!\n";
        else
            cout << "Do not take this onion to the lab!\n";
    }
}
