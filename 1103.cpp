#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int h1, m1, h2, m2;
    for (cin >> h1 >> m1 >> h2 >> m2; h1 != 0 || h2 != 0 || m1 != 0 || m2 != 0; cin >> h1 >> m1 >> h2 >> m2)
        if (h1 >= h2 || h2 >= h1) {
            m1 = m1 + (60 * h1);
            m2 = m2 + (60 * h2);
            if (m2 < m1)
                m2 = m2 + (24 * 60);
            cout << m2 - m1 << "\n";
        }
    return 0;
}
