/*
    Resolucao:
        Calcula o numero de possibilidades em que os quadrados
        podem ser pintados ( n! )
*/

#include <stdio.h>

int main()
{
    int i, j, n;
    while (scanf("%d", &n) && n) {
        int aux = 0;
        for (i = 1; i <= n; i++)
            aux += (i * i);
        printf("%d\n", aux);
    }
    return 0;
}