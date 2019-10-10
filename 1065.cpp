#include <cstdio>
#include <cstdlib>
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
    int a, qtd = 0;
    for (int i = 0; i < 5; ++i) {
        cin >> a;
        a = abs(a);
        if (a % 2 == 0)
            qtd++;
    }
    cout << qtd << " valores pares\n";
    return 0;
}
