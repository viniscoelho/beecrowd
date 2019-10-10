#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int q = 0;

int fib(int n)
{
    q++;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return (fib(n - 1) + fib(n - 2));
}

int main()
{
    int a, t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &a);
        int ans = fib(a);
        printf("fib(%d) = %d calls = %d\n", a, q - 1, ans);
        q = 0;
    }
    return 0;
}
