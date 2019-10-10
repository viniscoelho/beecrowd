#include <iostream>
#include <string>

using namespace std;

long long gcd(long long a, long long b)
{
    if (a < 0)
        return gcd(-a, b);
    if (b < 0)
        return gcd(a, -b);
    if (!b)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    cin.ignore(1);
    for (int i = 0; i < n; ++i) {
        string num, div;
        cin >> num;
        cin >> div;
        long long nu = 0, di = 0, k = 0, j = 0;
        while (k < num.size() || j < div.size()) {
            if (k < num.size()) {
                if (num[k] == '1')
                    nu ^= 1;
                nu <<= 1;
                k++;
            }
            if (j < div.size()) {
                if (div[j] == '1')
                    di ^= 1;
                di <<= 1;
                j++;
            }
        }
        nu >>= 1;
        di >>= 1;
        if (gcd(nu, di) == 1)
            cout << "Pair #" << i + 1 << ": Love is not all you need!" << endl;
        else
            cout << "Pair #" << i + 1 << ": All you need is love!" << endl;
    }
    return 0;
}
