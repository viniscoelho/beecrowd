#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#define mp make_pair
#define INF 0x3f3f3f3f

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    double a, b, c = 0, r = 0, s = 0, t = 0;
    char o;
    cin >> a;
    while (a--) {
        cin >> b >> o;
        if (o == 'C')
            c += b;
        else if (o == 'R')
            r += b;
        else
            s += b;
        t += b;
    }
    cout << "Total: " << t << " cobaias\n";
    cout << "Total de coelhos: " << c << "\n";
    cout << "Total de ratos: " << r << "\n";
    cout << "Total de sapos: " << s << "\n";

    cout << "Percentual de coelhos: " << fixed << setprecision(2) << (c / t) * 100 << " %\n";
    cout << "Percentual de ratos: " << fixed << setprecision(2) << (r / t) * 100 << " %\n";
    cout << "Percentual de sapos: " << fixed << setprecision(2) << (s / t) * 100 << " %\n";
    return 0;
}
