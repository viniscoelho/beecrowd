#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#define mp make_pair
#define INF 0x3f3f3f3f

using namespace std;

int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a * (b / gcd(a, b));
}

char resp[100];

int main()
{
    int n;
    char op;
    scanf("%d", &n);
    while (n--) {
        scanf(" %[^\n]s", &resp);
        int numA, denA, numB, denB, cont = 0;
        for (int i = 0; i < strlen(resp); ++i) {
            string num;
            while (i < strlen(resp) && resp[i] != ' ') {
                num += resp[i];
                i++;
            }
            cont++;
            if (cont == 4)
                op = num[0];
            else {
                istringstream str(num);
                int value;
                str >> value;
                if (cont == 1)
                    numA = value;
                else if (cont == 3)
                    denA = value;
                else if (cont == 5)
                    numB = value;
                else if (cont == 7)
                    denB = value;
            }
        }
        int numR, denR;
        if (op != '/') {
            denR = denA * denB;
            if (op == '-')
                numR = numA * denB - denA * numB;
            else if (op == '+')
                numR = numA * denB + denA * numB;
            else if (op == '*')
                numR = numA * numB;
        } else {
            numR = numA * denB;
            denR = numB * denA;
        }
        if (numR < 0 || denR < 0)
            printf("-%d/%d = -%d/%d\n", abs(numR), abs(denR), abs(numR / gcd(numR, denR)), abs(denR / gcd(numR, denR)));
        else
            printf("%d/%d = %d/%d\n", numR, denR, numR / gcd(numR, denR), denR / gcd(numR, denR));
    }
    return 0;
}
