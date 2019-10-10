#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <unordered_set>
#include <vector>
#define mp make_pair
#define pb push_back
#define MAXV 200100
#define PI 3.14159
#define TWOPI 2 * PI

using namespace std;

typedef long long int64;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;

int main()
{
    ios::sync_with_stdio(false);
    int a, b;
    while (cin >> a >> b) {
        priority_queue<int> v[1010];
        int resp = 0;
        int x, y;
        for (int i = 0; i < a; i++) {
            cin >> x >> y;
            resp += x;
            v[y].push(x);
        }
        for (int i = b; i >= 1; i--) {
            int maior = 0;
            int maior_pos = 0;

            for (int j = b; j >= i; j--) {
                if (!v[j].empty() && v[j].top() > maior) {
                    maior = v[j].top();
                    maior_pos = j;
                }
            }
            if (maior_pos > 0) {
                resp -= maior;
                v[maior_pos].pop();
            }
        }

        cout << resp << endl;
    }
    return 0;
}