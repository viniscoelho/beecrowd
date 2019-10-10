#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <iomanip>
#define pb push_back
#define mp make_pair

using namespace std;

typedef long long int64;

int main()
{
    ios::sync_with_stdio(false);
    int k;
    while (cin >> k && k)
    {
        int sum = 10, cur, act;
        cin >> cur;
        for (int i = 0; i < k - 1; i++)
        {
            cin >> act;
            if ((act - cur) > 9)
                sum += 10;
            else
                sum += (act - cur);
            cur = act;
        }
        cout << sum << endl;
    }
    return 0;
}