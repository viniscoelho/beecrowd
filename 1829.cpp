#include <bits/stdc++.h>
#include <unordered_map>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 310
#define pb push_back
#define mp make_pair

using namespace std;

const double pi = acos(-1.0);
const double epsilon = 1e-17;
const double INF = 1e50;

/*
    Mathematical property:
    log(a^n) = n*log(a)
    log(n!) = SUM i = 1 to n, log(i) 
*/

int winner[1010];

bool comp(double a, double b)
{
    return fabs(a - b) < epsilon;
}

//wether a double is greater than the other
bool comp(float a, float b, float eps)
{
    return (a - b) > ((fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * eps);
}

double logFactorial(int n)
{
    double sum = 0.0;
    for (int i = 2; i <= n; ++i)
        sum += log((double)i);
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    int n, lucas = 0, pedro = 0;
    cin >> n;
    string a, b;
    int e, x, z;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        size_t pos = a.find("^");
        stringstream s1(a.substr(0, pos));
        stringstream s2(a.substr(pos + 1));
        stringstream s3(b.substr(0, b.size() - 1));
        s1 >> e;
        s2 >> x;
        s3 >> z;
        double l1 = double(x) * log(double(e));
        double l2 = logFactorial(z);

        if (comp(l1, l2, epsilon))
            lucas++;
        else
            winner[i]++, pedro++;
    }
    if (lucas == pedro)
        cout << "A competicao terminou empatada!\n";
    else
        cout << ((pedro > lucas) ? "Campeao: Pedro!\n" : "Campeao: Lucas!\n");
    for (int i = 0; i < n; i++)
        cout << "Rodada #" << i + 1 << ": " << (winner[i] ? "Pedro" : "Lucas") << " foi o vencedor\n";
    return 0;
}