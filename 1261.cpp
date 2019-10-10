#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define INF 0x3f3f3f3f
#define MAX 1010
#define REP(i, V) for (long i = 0; i < V; ++i)
#define REPIT(it, V) for (list<int>::iterator it = V.begin(); it != V.end(); ++it)

using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> ii3;
typedef long long int64;
typedef long double Ld;

int main()
{
    ios::sync_with_stdio(false);
    long m, n, b;
    cin >> m >> n;
    unordered_map<string, int> bib;
    string a;
    while (m--) {
        cin >> a >> b;
        bib.insert(mp(a, b));
    }
    while (n--) {
        long ans = 0;
        while (cin >> a && a != ".")
            if (bib.count(a))
                ans += bib[a];
        cout << ans << "\n";
    }
    return 0;
}
