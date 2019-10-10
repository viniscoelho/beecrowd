#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#define mp make_pair

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    double a, pos = 0, qtd = 0;
    for (int i = 0; i < 6; ++i) {
        cin >> a;
        if (a >= 0) {
            pos += a;
            qtd++;
        }
    }
    cout << qtd << " valores positivos\n";
    cout << pos / qtd << "\n";
    return 0;
}
