#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <queue>
#include <vector>
#define mp make_pair

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int b, d;
    while (cin >> b >> d && b + d) {
        int x, y, c, banco[b];
        for (int i = 0; i < b; ++i)
            cin >> banco[i];
        for (int i = 0; i < d; ++i) {
            cin >> x >> y >> c;
            banco[x - 1] -= c;
            banco[y - 1] += c;
        }
        bool flag = false;
        for (int i = 0; i < b; ++i)
            if (banco[i] < 0) {
                flag = true;
                break;
            }
        if (flag)
            cout << "N\n";
        else
            cout << "S\n";
    }
    return 0;
}
