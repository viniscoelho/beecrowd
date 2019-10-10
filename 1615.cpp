#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int64;

typedef pair<int, string> is;

int readInt()
{
    bool minus = false;
    int result = 0;
    char ch;
    ch = getchar_unlocked();
    while (true)
    {
        if (ch == '-')
            break;
        if (ch >= '0' && ch <= '9')
            break;
        ch = getchar_unlocked();
    }
    if (ch == '-')
        minus = true;
    else
        result = ch - '0';
    while (true)
    {
        ch = getchar_unlocked();
        if (ch < '0' || ch > '9')
            break;
        result = result * 10 + (ch - '0');
    }
    if (minus)
        return -result;
    else
        return result;
}

int main()
{
    ios::sync_with_stdio(false);
    int a, b, c, t;
    t = readInt();
    while (t--)
    {
        a = readInt();
        b = readInt();
        unordered_map<int, int> election;
        for (int i = 0; i < b; i++)
        {
            c = readInt();
            if (election.count(c))
                election[c]++;
            else
                election.insert(mp(c, 1));
        }
        unordered_map<int, int>::iterator it;
        int winner = 0, count = 0;
        for (it = election.begin(); it != election.end(); it++)
        {
            if (it->second > count)
            {
                count = it->second;
                winner = it->first;
            }
        }
        if (count > b / 2)
            cout << winner << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}