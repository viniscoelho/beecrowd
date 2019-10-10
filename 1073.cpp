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
    for (int i = 2; i <= a; i += 2)
        cout << i << "^2 = " << i * i << "\n";
    return 0;
}
