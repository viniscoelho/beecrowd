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
    double a;
    int qtd = 0;
    for (int i = 0; i < 6; ++i) {
        cin >> a;
        if (a >= 0)
            qtd++;
    }
    cout << qtd << " valores positivos\n";
    return 0;
}
