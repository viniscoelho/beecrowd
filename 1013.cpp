#include <algorithm>
#include <cmath>
#include <cstdlib>
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
#define MAXV 100100

using namespace std;

typedef vector<int> vi;
typedef pair<int, string> is;

int main()
{
    ios::sync_with_stdio(false);
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << a << " eh o maior\n";
    else if (b > a && b > c)
        cout << b << " eh o maior\n";
    else if (c > b && c > a)
        cout << c << " eh o maior\n";
    return 0;
}
