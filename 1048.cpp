#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    double s;
    cin >> s;
    if (s <= 400) {
        cout << "Novo salario: " << fixed << setprecision(2) << s + s * 0.15 << "\n";
        cout << "Reajuste ganho: " << fixed << setprecision(2) << s * 0.15 << "\n";
        cout << "Em percentual: 15 %\n";
    } else if (s <= 800) {
        cout << "Novo salario: " << fixed << setprecision(2) << s + s * 0.12 << "\n";
        cout << "Reajuste ganho: " << fixed << setprecision(2) << s * 0.12 << "\n";
        cout << "Em percentual: 12 %\n";
    } else if (s <= 1200) {
        cout << "Novo salario: " << fixed << setprecision(2) << s + s * 0.1 << "\n";
        cout << "Reajuste ganho: " << fixed << setprecision(2) << s * 0.1 << "\n";
        cout << "Em percentual: 10 %\n";
    } else if (s <= 2000) {
        cout << "Novo salario: " << fixed << setprecision(2) << s + s * 0.07 << "\n";
        cout << "Reajuste ganho: " << fixed << setprecision(2) << s * 0.07 << "\n";
        cout << "Em percentual: 7 %\n";
    } else {
        cout << "Novo salario: " << fixed << setprecision(2) << s + s * 0.04 << "\n";
        cout << "Reajuste ganho: " << fixed << setprecision(2) << s * 0.04 << "\n";
        cout << "Em percentual: 4 %\n";
    }
    return 0;
}
