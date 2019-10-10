#include <algorithm>
#include <deque>
#include <iostream>
#include <queue>
#include <sstream>
#include <string>
#include <vector>
#define mp make_pair
#define pf push_front
#define pb push_back

using namespace std;

typedef long long int64;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;

int main()
{
    ios::sync_with_stdio(false);
    int n, q, r, c = 1;
    cin >> n;
    while (n--) {
        cout << "Case " << c++ << ": ";
        cin >> q;
        vector<int> resp;
        while (q--) {
            cin >> r;
            resp.pb(r);
        }
        sort(resp.begin(), resp.end());
        int t = 0, x = 0, y = resp.size() - 1;
        deque<int> ans;
        while (t < resp.size()) {
            if (ans.empty())
                ans.pb(resp[y--]);
            else {
                priority_queue<iii> pq;
                pq.push(mp(mp(abs(resp[x] - ans[0]), 1), x));
                pq.push(mp(mp(abs(resp[x] - ans[ans.size() - 1]), 2), x));
                pq.push(mp(mp(abs(resp[y] - ans[0]), 3), y));
                pq.push(mp(mp(abs(resp[y] - ans[ans.size() - 1]), 4), y));
                if (pq.top().first.second == 1) {
                    ans.pf(resp[pq.top().second]);
                    x++;
                } else if (pq.top().first.second == 2) {
                    ans.pb(resp[pq.top().second]);
                    x++;
                } else if (pq.top().first.second == 3) {
                    ans.pf(resp[pq.top().second]);
                    y--;
                } else {
                    ans.pb(resp[pq.top().second]);
                    y--;
                }
            }
            t++;
        }
        int sum = 0;
        for (int i = 0; i < ans.size() - 1; ++i)
            sum += abs(ans[i] - ans[i + 1]);
        cout << sum << "\n";
    }
    return 0;
}
