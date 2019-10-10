#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int c, a, b, g = 0, i = 0, e = 0, t = 0;
    while (cin >> a >> b) {
        t++;
        if (a > b)
            i++;
        else if (a < b)
            g++;
        else
            e++;
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> c;
        if (c == 2)
            break;
    }
    cout << t << " grenais\n";
    cout << "Inter:" << i << "\n";
    cout << "Gremio:" << g << "\n";
    cout << "Empates:" << e << "\n";
    if (g == i)
        cout << "Nao houve vencedor\n";
    else if (g > i)
        cout << "Gremio venceu mais\n";
    else
        cout << "Inter venceu mais\n";
    return 0;
}
