#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#define mp make_pair
#define INF 0x3f3f3f3f

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    double i = 0, j = 1;
    while (i < 2) {
        cout << "I=" << i << " J=" << j << "\n";
        cout << "I=" << i << " J=" << j + 1 << "\n";
        cout << "I=" << i << " J=" << j + 2 << "\n";
        i += 0.2, j += 0.2;
    }
    return 0;
}
