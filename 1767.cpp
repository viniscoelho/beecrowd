#include <bits/stdc++.h>
#include <unordered_map>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define ITEMS 310
#define MAXW 60
#define pb push_back
#define mp make_pair

using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-9;
const double INF = 1e50;

typedef pair<int, int> ii;
typedef pair<ii, string> iis;
typedef pair<double, double> dd;
typedef pair<string, string> ss;
typedef pair<int, iis> reinder;

int readInt()
{
    bool minus = false;
    int result = 0;
    char ch = getchar_unlocked();
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

typedef struct
{
    int weight, value;
} sack;

vector<sack> items(ITEMS);
int memo[ITEMS][MAXW]; //, best[ITEMS][MAXW];

int fill_sack(int n, int maxWeight, vector<int>& bestItems)
{
    for (int k = 0; k <= maxWeight; k++)
        memo[0][k] = 0;
    for (int k = 0; k <= n; k++)
        memo[k][0] = 0;
    vector<int> solution[ITEMS][MAXW];
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= maxWeight; j++) {
            memo[i][j] = memo[i - 1][j]; /* If I do not take this item */
            solution[i][j] = solution[i - 1][j];
            if (j - items[i - 1].weight >= 0) {
                /* suppose if I take this item */
                if ((memo[i - 1][j - items[i - 1].weight] + items[i - 1].value) >= memo[i][j]) {
                    memo[i][j] = memo[i - 1][j - items[i - 1].weight] + items[i - 1].value;
                    solution[i][j] = solution[i - 1][j - items[i - 1].weight];
                    solution[i][j].pb(i - 1);
                }
            }
        }
    bestItems = solution[n][maxWeight];
    return memo[n][maxWeight];
}

int main()
{
    int t, m, n;
    t = readInt();
    while (t--) {
        n = readInt();
        for (int k = 0; k < n; k++) {
            items[k].value = readInt();
            items[k].weight = readInt();
        }
        vector<int> bestItems;
        printf("%d brinquedos\n", fill_sack(n, 50, bestItems));

        int w = 0, p = bestItems.size();
        for (int i = 0; i < p; i++)
            w += items[bestItems[i]].weight;
        printf("Peso: %d kg\n", w);
        printf("sobra(m) %d pacote(s)\n\n", n - p);
    }
    return 0;
}