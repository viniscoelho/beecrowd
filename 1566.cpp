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
    while (true) {
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
    while (true) {
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
    int n, e;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &e);
        vector<int> h;
        for (int i = 0; i < e; i++) {
            h.pb(readInt());
        }
        sort(h.begin(), h.end());
        for (int i = 0; i < e; i++)
            if (i)
                printf(" %d", h[i]);
            else
                printf("%d", h[i]);
        printf("\n");
    }
    return 0;
}