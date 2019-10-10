#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <cstring>
#include <climits>

using namespace std;

const int INF = INT_MAX;

int main()
{
    ios::sync_with_stdio(false);
    double q, d, p;
    while (cin >> q && q)
    {
        cin >> d >> p;
        int resp = abs((-(q * d) / (p - q)) * p);
        cout << resp << ((resp > 1) ? " paginas" : " pagina") << "\n";
    }

    return 0;
}