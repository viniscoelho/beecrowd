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
typedef long long int64;

int main()
{
    double a, b = -1;
    scanf("%lf", &a);
    for (int i = 0; i < 100; ++i) {
        printf("N[%d] = %.4lf\n", i, a);
        a /= 2;
    }
    return 0;
}
