#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;
typedef long long int64;

int main()
{
    ios::sync_with_stdio(false);
    int64 a, b, sum = 0;
    cin >> a >> b;
    for (int64 i = min(a, b); i <= max(a, b); ++i)
        if (i % 13)
            sum += i;
    cout << sum << "\n";
    return 0;
}
