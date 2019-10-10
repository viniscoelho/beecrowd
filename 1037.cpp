#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#define EPS 1 - e17

using namespace std;

int cmp(double a, double b = 0.0)
{
    if (fabs(a - b) < EPS)
        return 0;
    return a > b ? 1 : -1;
}

int main()
{
    double a;
    cin >> a;
    if (cmp(a, 100.) == 1 || cmp(a, 0.) == -1)
        printf("Fora de intervalo\n");
    else if (cmp(a, 75.0) == 1)
        printf("Intervalo (75,100]\n");
    else if (cmp(a, 50.0) == 1)
        printf("Intervalo (50,75]\n");
    else if (cmp(a, 25.0) == 1)
        printf("Intervalo (25,50]\n");
    else if (cmp(a, 0.0) == 0)
        printf("Intervalo [0,25]\n");
    else if (cmp(a, 0.0) == 1)
        printf("Intervalo [0,25]\n");

    return 0;
}