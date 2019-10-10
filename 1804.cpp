#include <cstdio>
#include <stack>
#include <queue>
#include <list>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cctype>
#include <map>
//#include <unordered_map>
#define mp make_pair
#define pb push_back
#define pf push_front
#define LSOne(S) (S & (-S))

using namespace std;
//using namespace tr1;

void create(vector<int> &v, int n)
{
    v.assign(n + 1, 0);
}

int rsq(vector<int> &v, int a, int b)
{
    if (a == 0)
    {
        int sum = 0;
        for (; b >= 0; b = (b & (b + 1)) - 1)
        {
            sum += v[b];
        }
        return sum;
    }
    else
    {
        return rsq(v, 0, b) - rsq(v, 0, a - 1);
    }
}

void adjust(vector<int> &t, int k, int value)
{
    for (; k <= t.size(); k |= k + 1)
    {
        t[k] += value;
    }
}

typedef pair<int, int> ii;

bool comp(ii a, ii b)
{
    return a.first >= b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    int t;

    cin >> t;

    vector<int> ft, buggy(t);

    create(ft, t + 1);

    for (int i = 0; i < t; ++i)
    {
        cin >> buggy[i];
        adjust(ft, i + 1, buggy[i]);
    }

    char opc;
    int pos;
    while (cin >> opc)
    {
        cin >> pos;
        if (opc == 'a')
        {
            adjust(ft, pos, -buggy[pos - 1]);
        }
        else
            cout << rsq(ft, 1, pos - 1) << endl;
    }

    return 0;
}
