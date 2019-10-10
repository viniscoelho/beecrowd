#include <algorithm>
#include <bitset>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <locale>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 310
#define pb push_back
#define mp make_pair

using namespace std;

const double pi = acos(-1.0);
const double epsilon = 1e-17;
const double INF = 1e50;

typedef long long int64;

int matrix[11][11];

int main()
{
    ios::sync_with_stdio(false);
    int l, n;
    unordered_map<string, string> bib;
    cin >> l >> n;
    string a, b;
    while (l--) {
        cin >> a >> b;
        bib.insert(mp(a, b));
    }
    while (n--) {
        cin >> a;
        if (bib.count(a))
            cout << bib[a] << "\n";
        else {
            int s = a.size();
            switch (a[s - 1]) {
            case 'o':
            case 's':
            case 'x':
                cout << a << "es\n";
                break;
            case 'h': {
                if (s - 2 >= 0 && (a[s - 2] == 's' || a[s - 2] == 'c'))
                    cout << a << "es\n";
                else
                    cout << a << "s\n";
            } break;
            case 'y':
                if (s - 2 >= 0 && (a[s - 2] != 'a' && a[s - 2] != 'e' && a[s - 2] != 'i' && a[s - 2] != 'o' && a[s - 2] != 'u'))
                    cout << a.substr(0, s - 1) << "ies\n";
                else
                    cout << a << "s\n";
                break;
            default:
                cout << a << "s\n";
                break;
            }
        }
    }
    return 0;
}