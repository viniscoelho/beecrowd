#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#define mp make_pair

using namespace std;

typedef pair<string, string> ss;

int main()
{
    ios::sync_with_stdio(false);
    double a;
    cin >> a;
    if (a <= 2000)
        cout << "Isento\n";
    else if (a <= 3000)
        cout << "R$ " << fixed << setprecision(2) << (a - 2000) * 0.08 << "\n";
    else if (a <= 4500)
        cout << "R$ " << fixed << setprecision(2) << 80 + (a - 3000) * 0.18 << "\n";
    else
        cout << "R$ " << fixed << setprecision(2) << 350 + (a - 4500) * 0.28 << "\n";

    return 0;
}