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
    for (int i = 1; i <= a; i += 2)
        cout << i << "\n";
    return 0;
}
