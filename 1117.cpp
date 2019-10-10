#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    double t = 0, a, b, sum = 0;
    while (t < 2) {
        cin >> a;
        if (a >= 0 && a <= 10) {
            sum += a;
            t++;
        } else
            cout << "nota invalida\n";
    }
    cout << "media = " << fixed << setprecision(2) << sum / 2 << "\n";
    return 0;
}
