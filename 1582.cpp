#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef unsigned long long int64;

int64 gcd(int64 a, int64 b)
{
    return (b == 0 ? a : gcd(b, a % b));
}

int main()
{
    ios::sync_with_stdio(false);
    vector<int> num(3);
    while (cin >> num[0] >> num[1] >> num[2]) {
        sort(num.begin(), num.end());
        cout << "tripla";
        if (num[2] * num[2] == (num[0] * num[0] + num[1] * num[1])) {
            cout << " pitagorica";
            //gcd(a, b, c)
            if (gcd(num[0], gcd(num[1], num[2])) == 1)
                cout << " primitiva";
        }
        cout << "\n";
    }
    return 0;
}