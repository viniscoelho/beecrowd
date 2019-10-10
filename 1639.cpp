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
    int64 t;
    while (cin >> t && t) {
        unordered_map<int, int> st;
        st.insert(mp(t, 1));
        while (true) {
            int64 aux = t * t;
            t = (aux / 100) % 10000;
            if (st.count(t))
                break;
            st.insert(mp(t, 1));
        }
        cout << st.size() << "\n";
    }
    return 0;
}