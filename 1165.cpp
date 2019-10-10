#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long n, t;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n == 2 || n == 3)
            cout << n << " eh primo\n";
        else if (n == 1 || n % 2 == 0)
            cout << n << " nao eh primo\n";
        else {
            bool flag = false;
            for (long long i = 3; i <= sqrt(n); i += 2)
                if (n % i == 0) {
                    cout << n << " nao eh primo\n";
                    flag = true;
                    break;
                }
            if (!flag)
                cout << n << " eh primo\n";
        }
    }
    return 0;
}