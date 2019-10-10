#include <algorithm>
#include <climits>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

const int INF = INT_MAX;

int main()
{
    ios::sync_with_stdio(false);
    int p;
    string dir;
    while (cin >> p && p) {
        cin >> dir;
        int pos = 0;
        for (int i = 0; i < dir.size(); i++) {
            if (dir[i] == 'D')
                pos++;
            else
                pos += 3;
        }
        pos = pos % 4;
        switch (pos) {
        case 0:
            cout << "N\n";
            break;
        case 1:
            cout << "L\n";
            break;
        case 2:
            cout << "S\n";
            break;
        case 3:
            cout << "O\n";
            break;
        }
    }

    return 0;
}