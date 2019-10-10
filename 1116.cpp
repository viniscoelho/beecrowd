#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    double t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (b == 0)
            cout << "divisao impossivel\n";
        else if (a >= b && !(int(a) % int(b)))
            cout << fixed << setprecision(1) << a / b << "\n";
        else
            cout << fixed << setprecision(1) << a / b << "\n";
    }
    return 0;
}