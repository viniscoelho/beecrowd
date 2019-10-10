#include <algorithm>
#include <climits>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

const int INF = INT_MAX;

int main()
{
    ios::sync_with_stdio(false);
    double q, d, p;
    while (cin >> q && q) {
        cin >> d >> p;
        int resp = abs((-(q * d) / (p - q)) * p);
        cout << resp << ((resp > 1) ? " paginas" : " pagina") << "\n";
    }

    return 0;
}