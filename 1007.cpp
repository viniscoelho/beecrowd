#include <algorithm>
#include <cctype>
#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <vector>
#define mp make_pair
#define pb push_back

using namespace std;

typedef unsigned long long uint64;
typedef pair<int, int> ii;

int main()
{
    ios::sync_with_stdio(false);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "DIFERENCA = " << a * b - c * d << "\n";
    return 0;
}
