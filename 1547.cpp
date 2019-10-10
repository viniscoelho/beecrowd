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
int students[110];

int main()
{
    ios::sync_with_stdio(false);
    int t, n, c, tshirt;
    cin >> t;
    while (t--)
    {
        cin >> n >> tshirt;
        bool flag = false;
        int winner = 0, poss = INF;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            students[i] = abs(c - tshirt);
            if (!flag && c == tshirt)
            {
                flag = true;
                winner = i + 1;
            }
            else if (!flag && students[i] < poss)
            {
                poss = students[i];
                winner = i + 1;
            }
        }
        cout << winner << "\n";
    }

    return 0;
}