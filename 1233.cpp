#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <vector>
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<int, int> prime_pot;
typedef long long int64;

const unsigned MAX = 50000 / 60, MAX_S = sqrt(MAX / 60);

unsigned w[16] = { 1, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 49, 53, 59 };
unsigned mod[16][16], di[16][16], num;
unsigned short composite[MAX];
vector<int> primes;

void sieve()
{
    for (int i = 0; i < 16; i++)
        for (int j = 0; j < 16; j++) {
            di[i][j] = (w[i] * w[j]) / 60;
            mod[i][j] = lower_bound(w, w + 16, (w[i] * w[j]) % 60) - w;
        }
    primes.pb(2);
    primes.pb(3);
    primes.pb(5);

    for (unsigned i = 0; i < MAX; i++)
        for (int j = (i == 0); j < 16; j++) {
            if (composite[i] & (1 << j))
                continue;
            primes.pb(num = 60 * i + w[j]);

            if (i > MAX_S)
                continue;
            for (unsigned k = i, done = false; !done; k++)
                for (int l = (k == 0); l < 16 && !done; l++) {
                    unsigned mult = k * num + i * w[l] + di[j][l];
                    if (mult >= MAX)
                        done = true;
                    else
                        composite[mult] |= 1 << mod[j][l];
                }
        }
}

int64 phi(int64 n)
{
    int64 PF_idx = 0, PF = primes[PF_idx], ans = n;
    while (n != 1 && (PF * PF <= n)) {
        if (n % PF == 0)
            ans -= ans / PF;
        while (n % PF == 0)
            n /= PF;
        PF = primes[++PF_idx];
    }
    if (n != 1)
        ans -= ans / n;
    return ans;
}

int main()
{
    sieve();
    int64 n;
    while (scanf("%lld", &n) != EOF)
        printf("%lld\n", phi(n) / 2);
    return 0;
}
