#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <queue>
#include <string>

using namespace std;

typedef long long int64;

bool tab[10][10];

int main()
{
    ios::sync_with_stdio(false);
    int pos[] = { 0, 8, 7, 6, 5, 4, 3, 2, 1 };
    int t = 1;
    string a, b;
    while (cin >> a && a != "0") {
        for (int i = 0; i < 9; ++i) {
            for (int j = i; j < 9; ++j)
                tab[i][j] = tab[j][i] = false;
            tab[i][i] = false;
        }
        for (int i = 0; i < 8; ++i) {
            cin >> b;
            tab[b[0] - 48][pos[b[1] - 96]] = true;
        }

        int ans = 0, p1 = a[0] - 48, p2 = pos[a[1] - 96];

        if (p1 + 1 > 0 && p1 + 1 < 9 && p2 + 2 > 0 && p2 + 2 < 9) {
            int x = p1 + 1, y = p2 + 2;
            if (!tab[x + 1][y - 1] && !tab[x + 1][y + 1])
                ans++;
        }
        if (p1 + 2 > 0 && p1 + 2 < 9 && p2 + 1 > 0 && p2 + 1 < 9) {
            int x = p1 + 2, y = p2 + 1;
            if (!tab[x + 1][y - 1] && !tab[x + 1][y + 1])
                ans++;
        }
        if (p1 + 1 > 0 && p1 + 1 < 9 && p2 - 2 > 0 && p2 - 2 < 9) {
            int x = p1 + 1, y = p2 - 2;
            if (!tab[x + 1][y - 1] && !tab[x + 1][y + 1])
                ans++;
        }
        if (p1 + 2 > 0 && p1 + 2 < 9 && p2 - 1 > 0 && p2 - 1 < 9) {
            int x = p1 + 2, y = p2 - 1;
            if (!tab[x + 1][y - 1] && !tab[x + 1][y + 1])
                ans++;
        }
        if (p1 - 1 > 0 && p1 - 1 < 9 && p2 - 2 > 0 && p2 - 2 < 9) {
            int x = p1 - 1, y = p2 - 2;
            if (!tab[x + 1][y - 1] && !tab[x + 1][y + 1])
                ans++;
        }
        if (p1 - 2 > 0 && p1 - 2 < 9 && p2 - 1 > 0 && p2 - 1 < 9) {
            int x = p1 - 2, y = p2 - 1;
            if (!tab[x + 1][y - 1] && !tab[x + 1][y + 1])
                ans++;
        }
        if (p1 - 1 > 0 && p1 - 1 < 9 && p2 + 2 > 0 && p2 + 2 < 9) {
            int x = p1 - 1, y = p2 + 2;
            if (!tab[x + 1][y - 1] && !tab[x + 1][y + 1])
                ans++;
        }
        if (p1 - 2 > 0 && p1 - 2 < 9 && p2 + 1 > 0 && p2 + 1 < 9) {
            int x = p1 - 2, y = p2 + 1;
            if (!tab[x + 1][y - 1] && !tab[x + 1][y + 1])
                ans++;
        }
        cout << "Caso de Teste #" << t++ << ": " << ans << " movimento(s).\n";
    }
    return 0;
}
