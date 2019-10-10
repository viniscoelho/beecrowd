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
    int i = 1, j = 60;
    cout << "I=" << i << " J=" << j << "\n";
    while (j) {
        i += 3, j -= 5;
        cout << "I=" << i << " J=" << j << "\n";
    }
    return 0;
}
