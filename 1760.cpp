#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    double n;
    while (cin >> n) {
        cout << fixed << setprecision(2) << ((n * n * sqrt(3)) / 4) * 1.6 << endl;
    }
    return 0;
}