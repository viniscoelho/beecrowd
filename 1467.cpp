#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        if ((!a && (b & c)) || (a && !(b | c)))
            cout << "A\n";
        else if ((!b && (a & c)) || (b && !(a | c)))
            cout << "B\n";
        else if ((!c && (a & b)) || (c && !(a | b)))
            cout << "C\n";
        else if (((a & b) & c) || !((a & b) & c))
            cout << "*\n";
    }
    return 0;
}