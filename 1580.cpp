#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <map>
#include <unordered_set>
#include <unordered_map>
#define mp make_pair
#define pb push_back
#define MOD 1000000007LL
#define SSTR(x) dynamic_cast<std::ostringstream &>(          \
                    (std::ostringstream() << std::dec << x)) \
                    .str()

using namespace std;

typedef long long int64;

vector<int64> fat(1010, 1);

/* This function calculates (a^b) % MOD */
int64 fastPow(int64 a, int64 b)
{
    int64 res = 1LL;
    while (b > 0LL)
    {
        if (b & 1LL)
        {
            res *= a;
            res %= MOD;
        }
        a *= a;
        a %= MOD;
        b >>= 1;
    }
    return res;
}

/*
    Modular Multiplicative Inverse
    Using Euler's Theorem
*/

long long InverseEuler(int64 n)
{
    return fastPow(n, MOD - 2LL);
}

/*
    Number of different permutations:
    N!/K1! * K2! * ... KM!
    Where K is the number that a letter repeats on the string
    For this, the result should be printed modulus 10^9+7,
    since the number is huge.
    Thus, (N! % 10^9+7) * ModularInverse((K1! * K2! * ... KM!) % 10^9+7) = N!/K1! * K2! * ... KM!
*/

int main()
{
    int t, n, r;
    for (int i = 2; i < 1010; i++)
        fat[i] = (fat[i - 1] * i) % MOD;
    string s;
    while (cin >> s)
    {
        int64 n = fat[s.size()];

        int tam = s.size();
        unordered_map<char, int> letters;
        for (int i = 0; i < tam; i++)
        {
            if (letters.count(s[i]))
                letters[s[i]]++;
            else
                letters.insert(mp(s[i], 1));
        }

        int64 r = 1;
        unordered_map<char, int>::iterator it;
        for (it = letters.begin(); it != letters.end(); it++)
        {
            r = (r * fat[it->second]) % MOD;
        }

        int64 k = InverseEuler(r);
        printf("%lld\n", (n * k) % MOD);
    }
}