#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int64;

typedef pair<int, string> is;

char matrix[60][60];

int main()
{
    ios::sync_with_stdio(false);
    int m, n, a;
    cin >> m;
    while (m--) {
        int qtd = 0;
        cin >> n;
        vector<ii> pos, orig(n);
        for (int i = 0; i < n; i++) {
            cin >> orig[i].first;
            orig[i].second = i;
            pos.pb(orig[i]);
        }
        sort(pos.begin(), pos.end(), greater<ii>());
        for (int i = 0; i < n; i++)
            if (pos[i].second == orig[i].second)
                qtd++;
        cout << qtd << "\n";
    }
    return 0;
}