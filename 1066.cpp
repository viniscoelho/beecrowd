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
    int a, par = 0, impar = 0, pos = 0, neg = 0;
    for (int i = 0; i < 5; ++i) {
        cin >> a;
        if (a < 0)
            neg++;
        else if (a > 0)
            pos++;
        a = abs(a);
        if (a % 2 == 0)
            par++;
        else
            impar++;
    }
    cout << par << " valor(es) par(es)\n";
    cout << impar << " valor(es) impar(es)\n";
    cout << pos << " valor(es) positivo(s)\n";
    cout << neg << " valor(es) negativo(s)\n";
    return 0;
}
