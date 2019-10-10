#include <cstdio>
#include <iostream>
#include <vector>
#define MOD 1300031LL

using namespace std;

typedef long long int64;

vector<int64> fat(MOD + 1, 1);

/* This function calculates (a^b) % MOD */
int64 fastPow(int64 a, int64 b)
{
    int64 res = 1LL;
    while (b > 0LL) {
        if (b & 1LL) {
            res *= a;
            res %= MOD;
        }
        a *= a;
        a %= MOD;
        b >>= 1;
    }
    return res;
}

int countFact(int n, int p)
{
    int k = 0;
    while (n >= p) {
        k += n / p;
        n /= p;
    }
    return k;
}

/*
    Modular Multiplicative Inverse
    Using Euler's Theorem
*/

long long InverseEuler(int n)
{
    return fastPow(n, MOD - 2LL);
}

long long C(int n, int r)
{
    if (countFact(n, MOD) > (countFact(r, MOD) + countFact(n - r, MOD)))
        return 0LL;
    return (fat[n] * ((InverseEuler(fat[r]) * InverseEuler(fat[n - r])) % MOD)) % MOD;
}

int main()
{
    int t;
    scanf("%d", &t);
    int n, r;
    for (int i = 2; i < MOD; i++)
        fat[i] = (fat[i - 1] * i) % MOD;
    while (t--) {
        scanf("%d %d", &n, &r);
        printf("%lld\n", C(n + r - 1, n - 1));
    }
}