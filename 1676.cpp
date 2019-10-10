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
#define MAX 38000
#define pb push_back
#define mp make_pair

using namespace std;

const double pi = acos(-1.0);
const double epsilon = 1e-17;
const double INF = 1e50;

typedef long long int64;

vector<int> resp;

void initialize()
{
    set<int> lucky;
    for (int i = 2; i < MAX; i++)
        lucky.insert(i);
    int st = lucky.size();
    for (int i = 2; i < st; i++) {
        int at = *lucky.begin(), aux = 1;
        resp.pb(at);
        lucky.erase(lucky.begin());
        set<int>::iterator it = lucky.begin(), tmp;
        while (it != lucky.end()) {
            if (aux == at) {
                tmp = it;
                tmp++;
                lucky.erase(it);
                st = lucky.size();
                aux = 1;
                it = tmp;
            } else
                aux++, it++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    initialize();
    int n;
    while (cin >> n && n) {
        cout << resp[n - 1] << "\n";
    }
    return 0;
}