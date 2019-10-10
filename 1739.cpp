#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define MAXV 200100
#define SSTR(x) dynamic_cast<std::ostringstream &>(          \
                    (std::ostringstream() << std::dec << x)) \
                    .str()

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

unordered_map<int, int64> three;

void threebonacci()
{
    int64 a = 0, b = 1, d = 0;
    int count = 1;
    while (count < 61)
    {
        d = a + b;
        a = b;
        b = d;
        if (d % 3 == 0)
            three.insert(mp(count++, d));
        else
        {
            string s = SSTR(d);
            for (int i = 0; i < s.size(); i++)
                if (s[i] == '3')
                {
                    three.insert(mp(count++, d));
                    break;
                }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    threebonacci();
    int s;
    while (cin >> s)
    {
        cout << three[s] << endl;
    }
    return 0;
}