#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<int, int> prime_pot;
typedef long long int64;

const unsigned MAX = 200010 / 60, MAX_S = sqrt(MAX / 60);

unsigned w[16] = { 1, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 49, 53, 59 };
unsigned short composite[MAX];
vector<int> primes;

void sieve()
{
    unsigned mod[16][16], di[16][16], num;
    for (int i = 0; i < 16; i++)
        for (int j = 0; j < 16; j++) {
            di[i][j] = (w[i] * w[j]) / 60;
            mod[i][j] = lower_bound(w, w + 16, (w[i] * w[j]) % 60) - w;
        }
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);

    for (unsigned i = 0; i < MAX; i++)
        for (int j = (i == 0); j < 16; j++) {
            if (composite[i] & (1 << j))
                continue;
            primes.push_back(num = 60 * i + w[j]);
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

int main()
{
    int a, b, n;
    sieve();
    while (scanf("%d", &n) && n) {
        vector<int> joseph;
        vector<int>::iterator it;
        joseph.pb(n);
        for (int i = 1; i < n; ++i)
            joseph.pb(i);
        int pos = 0, res = 0, qtd = n;
        while (qtd > 1) {
            int k = (res + primes[pos++]) % qtd;
            it = joseph.begin();
            if (k >= 0)
                advance(it, k);
            res = int(it - joseph.begin()) - 1;
            joseph.erase(it);
            qtd--;
        }
        printf("%d\n", *joseph.begin());
    }
    return 0;
}
