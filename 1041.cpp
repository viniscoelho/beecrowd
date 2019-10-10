#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    double x, y;
    cin >> x >> y;
    if (!x && !y)
        cout << "Origem\n";
    else if (x > 0 && y > 0)
        cout << "Q1\n";
    else if (x < 0 && y > 0)
        cout << "Q2\n";
    else if (x < 0 && y < 0)
        cout << "Q3\n";
    else if (x > 0 && y < 0)
        cout << "Q4\n";
    else if (y == 0)
        cout << "Eixo X\n";
    else if (x == 0)
        cout << "Eixo Y\n";
    return 0;
}
