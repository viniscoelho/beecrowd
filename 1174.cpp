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
    double n, a;
    for (int i = 0; i < 100; ++i) {
        scanf("%lf", &n);
        if (n <= 10) {
            if (ceil(n) != floor(n))
                printf("A[%d] = %.1lf\n", i, n);
            else
                printf("A[%d] = %.0lf\n", i, n);
        }
    }
    return 0;
}
