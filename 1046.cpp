#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int i, j;
    cin >> i >> j;
    if (i <= j)
        cout << "O JOGO DUROU " << j - i << " HORA(S)\n";
    else
        cout << "O JOGO DUROU " << 24 - i + j << " HORA(S)\n";
    return 0;
}
