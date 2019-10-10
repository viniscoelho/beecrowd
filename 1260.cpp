#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAXN 10000
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3FFFFFFFFFLL
#define pb push_back
#define mp make_pair

using namespace std;

typedef vector<int> vi;
typedef long long int64;
typedef unsigned long long uint64;
typedef pair<string, double> sd;

string buffer;

int main()
{
    ios::sync_with_stdio(false);
    int num, n = 0;
    cin >> num;
    cin.ignore();
    getline(cin, buffer);
    while (num--) {
        if (n > 0)
            cout << "\n";
        unordered_map<string, double> trees;
        unordered_map<string, double>::iterator mit;
        pair<unordered_map<string, double>::iterator, bool> ret;
        double cont = 0.;
        while (getline(cin, buffer) && buffer.size()) {
            ret = trees.insert(mp(buffer, 1.));
            if (!ret.second)
                trees[buffer]++;
            cont++;
        }
        vector<sd> rTree;
        for (mit = trees.begin(); mit != trees.end(); ++mit)
            rTree.pb(mp(mit->first, mit->second));
        sort(rTree.begin(), rTree.end());
        for (int i = 0; i < rTree.size(); ++i)
            cout << rTree[i].first << " " << fixed << setprecision(4) << ((rTree[i].second) / cont) * 100 << "\n";
        n++;
    }
    return 0;
}
