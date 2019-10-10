#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int a;
    double b;
    cin >> a >> b;
    switch (a) {
    case 1:
        cout << "Total: R$ " << fixed << setprecision(2) << 4 * b << "\n";
        break;
    case 2:
        cout << "Total: R$ " << fixed << setprecision(2) << 4.5 * b << "\n";
        break;
    case 3:
        cout << "Total: R$ " << fixed << setprecision(2) << 5 * b << "\n";
        break;
    case 4:
        cout << "Total: R$ " << fixed << setprecision(2) << 2 * b << "\n";
        break;
    case 5:
        cout << "Total: R$ " << fixed << setprecision(2) << 1.5 * b << "\n";
        break;
    }

    return 0;
}
