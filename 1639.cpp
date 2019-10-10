#include <iostream>
#include <algorithm>
#include <functional>
#include <locale>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <cmath>
#include <queue>
#include <ctime>
#include <cfloat>
#include <vector>
#include <string>
#include <cstdio>
#include <bitset>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <iomanip>
#include <sstream>
#include <utility>
#include <unordered_map>
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
    while (cin >> t && t)
    {
        unordered_map<int, int> st;
        st.insert(mp(t, 1));
        while (true)
        {
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