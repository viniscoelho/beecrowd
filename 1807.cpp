#include <iostream>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <map>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int64;

int64 modpow(int64 base, int64 exp, int64 modulus)
{
    base %= modulus;
    int64 result = 1;
    while (exp > 0)
    {
        if (exp & 1) result = (result * base) % modulus;
        base = (base * base) % modulus;
        exp >>= 1;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    int64 n;
    cin >> n;
    int64 mod = (1 << 31) - 1;
    cout << modpow(3, n, mod) << endl;
    return 0;
}