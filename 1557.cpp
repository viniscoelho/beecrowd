//#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#define ALL(V) V.begin(), V.end()
#define FORIT(i, a) for (TI(a) i = a.begin(); i != a.end(); i++)
#define TI(X) __typeof((X).begin())

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int a;

    while (cin >> a && a)
    {
        long long resp = 1, d = 1;
        int count = 0;

        for (int i = 0; i < a - 1; i++)
            d *= 2;
        d <<= (a - 1);

        while (d)
        {
            d /= 10, count++;
        }

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                cout << ((j == 0) ? "" : " ");
                cout << setw(count) << (resp << j);
            }
            resp *= 2;
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}