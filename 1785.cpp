//#include <bits/stdc++.h>
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#define ALL(V) V.begin(), V.end()
#define FORIT(i, a) for (TI(a) i = a.begin(); i != a.end(); i++)
#define TI(X) __typeof((X).begin())
#define mp make_pair

using namespace std;

pair<int, int> number_with_digits_of(int x)
{
    string str, rts;
    int a, b;
    while (x) {
        int r = x % 10;
        str += to_string(r);
        x /= 10;
    }
    while (str.size() < 4)
        str += '0';

    sort(str.begin(), str.end());
    rts = str; //for a reverse copy
    reverse(rts.begin(), rts.end());
    stringstream n1(rts), n2(str);

    (n1 >> a);
    (n2 >> b);

    return mp(a, b);
}

int krapekar(int x)
{
    int count = 0;
    while (x != 6174) {
        pair<int, int> ii = number_with_digits_of(x);
        int hi = ii.first;
        int lo = ii.second;

        x = hi - lo;
        count++;
        if (count > 100)
            break;
    }
    return (count > 100) ? -1 : count;
}

int main()
{
    ios::sync_with_stdio(false);
    int t, k;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> k;
        cout << "Caso #" << i << ": " << krapekar(k) << "\n";
    }

    return 0;
}
