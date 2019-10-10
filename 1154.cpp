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
    double a, sum = 0, qtd = 0;
    while (cin >> a && a >= 0)
        sum += a, qtd++;
    cout << fixed << setprecision(2) << sum / qtd << "\n";
    return 0;
}
