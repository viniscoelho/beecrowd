#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int a, c = 1, t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string resp;
        getline(cin, resp);
        reverse(resp.begin(), resp.begin() + resp.size() / 2);
        reverse(resp.begin() + resp.size() / 2, resp.end());
        cout << resp << "\n";
    }
    return 0;
}