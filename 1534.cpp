#include <bits/stdc++.h>
#define ALL(V) V.begin(), V.end()
#define FORIT(i, a) for (TI(a) i = a.begin(); i != a.end(); i++)
#define TI(X) __typeof((X).begin())

using namespace std;

int matrix[110][110];

int main()
{
    ios::sync_with_stdio(false);
    int a;

    while (cin >> a)
    {
        int b = 0, c = a - 1;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                if (b == c && j == c)
                    cout << 2;
                else if (j == b && b != c)
                    cout << 1;
                else if (j == c && b != c)
                    cout << 2;
                else
                    cout << 3;
            }
            b++, c--;
            cout << "\n";
        }
    }
    return 0;
}