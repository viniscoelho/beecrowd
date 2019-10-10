#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int c = -1;
    while (c != 2) {
        double t = 0, a, b, sum = 0;
        while (t < 2) {
            scanf("%lf", &a);
            if (a >= 0 && a <= 10) {
                sum += a;
                t++;
            } else
                printf("nota invalida\n");
        }
        printf("media = %.2lf\n", sum / 2);
        do {
            printf("novo calculo (1-sim 2-nao)\n");
        } while (scanf("%d", &c) && c != 2 && c != 1);
    }
    return 0;
}
