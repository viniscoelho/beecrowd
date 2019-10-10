#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>

using namespace std;

typedef long long int64;

int main()
{
    int64 t, n, m;
    while (scanf("%lld %lld", &n, &m) != EOF)
        printf("%lld\n", (n ^ m));
    return 0;
}
