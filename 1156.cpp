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
    double num = 1, den = 1, sum = 0;
    while (num <= 39) {
        sum += (num / den);
        num += 2, den *= 2;
    }
    cout << fixed << setprecision(2) << sum << "\n";
    return 0;
}
