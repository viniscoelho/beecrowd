#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    vector<int> resp(3), ans(3);
    for (int i = 0; i < 3; ++i) {
        cin >> resp[i];
        ans[i] = resp[i];
    }
    sort(resp.begin(), resp.end());
    cout << resp[0] << "\n"
         << resp[1] << "\n"
         << resp[2] << "\n\n";
    cout << ans[0] << "\n"
         << ans[1] << "\n"
         << ans[2] << "\n";
    return 0;
}
