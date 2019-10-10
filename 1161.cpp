#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#define mp make_pair
#define pb push_back

using namespace std;

int m, n, a, b;

typedef unsigned long long uint64;
typedef pair<int, int> ii;

uint64 fatorial[30];

void fat()
{
    fatorial[0] = fatorial[1] = 1;
    for (int i = 2; i < 21; ++i)
        fatorial[i] = fatorial[i - 1] * i;
}

int main()
{
    ios::sync_with_stdio(false);
    fat();
    while (cin >> m >> n) {
        cout << fatorial[m] + fatorial[n] << "\n";
    }
    return 0;
}
