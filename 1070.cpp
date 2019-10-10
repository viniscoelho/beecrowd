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
    int a;
    cin >> a;
    if (a % 2 == 0)
        a++;
    for (int i = a, j = 0; j < 6; i += 2, j++)
        cout << i << "\n";
    return 0;
}
