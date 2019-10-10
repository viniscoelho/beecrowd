#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 1100
#define pb push_back
#define mp make_pair

using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-9;
const double INF = 1e50;

struct pt;
typedef pair<pt, pt> line;
typedef vector<pt> polygon;
typedef pair<pt, int> ddi;
typedef pair<double, double> dd;
typedef long long int64;

int cmp(double a, double b = 0.0)
{
    if (fabs(a - b) < EPS)
        return 0;
    return a > b ? 1 : -1;
}

unordered_map<char, int> value;
char str[MAX];

bool isDivisible(int b)
{
    int64 ans = 0;
    if (strlen(str) == 1 && value.count(str[0]))
        ans = value[str[0]];
    for (int j = 0; j < strlen(str) - 1; ++j) {
        if (!value.count(str[j]))
            continue;
        if (!ans) {
            ans = (value[str[j]]) * b;
            while ((j < strlen(str) - 1) && !value.count(str[j + 1]))
                j++;
            if (j < strlen(str) - 1)
                ans += value[str[j + 1]];
        } else {
            ans = ((ans % (b - 1)) * b) % (b - 1);
            while ((j < strlen(str) - 1) && !value.count(str[j + 1]))
                j++;
            if (j < strlen(str) - 1)
                ans += value[str[j + 1]];
        }
    }
    if ((ans % (b - 1)) == 0)
        return true;
    return false;
}

int main()
{
    int count = 0;
    for (char i = '0'; i <= '9'; ++i)
        value[i] = count++;
    for (char i = 'A'; i <= 'Z'; ++i)
        value[i] = count++;
    for (char i = 'a'; i <= 'z'; ++i)
        value[i] = count++;
    while (scanf(" %[^\n]s", &str) != EOF) {
        int m = 0, flag = false;
        REP(i, strlen(str))
        m = max(m, value[str[i]]);
        if (m == 0)
            printf("2\n");
        else {
            FOR(i, m + 1, 62)
            if (isDivisible(i)) {
                printf("%d\n", i);
                flag = true;
                break;
            }
            if (!flag)
                printf("such number is impossible!\n");
        }
    }
    return 0;
}
