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

bool isPowerOfTwo(int x)
{
    return (x != 0) && ((x & (-x)) == x);
}

int main()
{
    ios::sync_with_stdio(false);
    int p, t[3];
    int a, b, c;

    while (cin >> p && p)
    {
        memset(t, 0, sizeof t);
        int m;
        for (int i = 0; i < p; i++)
        {
            cin >> a >> b >> c;
            m = max(a, max(b, c));
            if (isPowerOfTwo(a))
                t[0]++;
            if (isPowerOfTwo(b))
                t[1]++;
            if (isPowerOfTwo(c))
                t[2]++;
            if (!isPowerOfTwo(m))
                continue;
            if (m == a)
                t[0]++;
            if (m == b)
                t[1]++;
            if (m == c)
                t[2]++;
        }
        m = max(t[0], max(t[1], t[2]));

        if (t[0] > t[1] && t[0] > t[2])
            cout << "Uilton\n";
        else if (t[1] > t[0] && t[1] > t[2])
            cout << "Rita\n";
        else if (t[2] > t[0] && t[2] > t[1])
            cout << "Ingred\n";
        else
            cout << "URI\n";
    }

    return 0;
}