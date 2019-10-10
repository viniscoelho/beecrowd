#include <cmath>
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
    int n;
    double a;
    cin >> n;
    while (n--) {
        cin >> a;
        cout << fixed << setprecision(0.0) << floor((pow(2, a) / 12) / 1000) << " kg\n";
    }
    return 0;
}