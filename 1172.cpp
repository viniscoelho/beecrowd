#include <cmath>
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
    int n, a;
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &n);
        if (n <= 0)
            printf("X[%d] = 1\n", i);
        else
            printf("X[%d] = %d\n", i, n);
    }
    return 0;
}
