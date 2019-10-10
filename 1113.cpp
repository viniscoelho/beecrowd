#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t, a, b;
    while (cin >> a >> b && a != b) {
        if (a > b)
            cout << "Decrescente\n";
        else
            cout << "Crescente\n";
    }
    return 0;
}