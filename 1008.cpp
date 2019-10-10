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
    int m;
    double a, b;
    cin >> m >> a >> b;
    cout << "NUMBER = " << m << "\n";
    cout << "SALARY = U$ " << fixed << setprecision(2) << a * b << "\n";

    return 0;
}
