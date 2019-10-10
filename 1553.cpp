#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <string>
#include <cstring>
#include <sstream>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <stack>
#include <map>
#define mp make_pair
#define pb push_back
#define MAXV 200100
#define PI 3.14159
#define TWOPI 2 * PI

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef long long int64;

int main()
{
    ios::sync_with_stdio(false);
    int a, b, x;
    while (cin >> a >> b && a + b)
    {
        map<int, int> questions;
        for (int i = 0; i < a; i++)
        {
            cin >> x;
            if (questions.count(x))
                questions[x]++;
            else
                questions[x] = 1;
        }
        map<int, int>::iterator mi;
        int resp = 0;
        for (mi = questions.begin(); mi != questions.end(); mi++)
        {
            if (mi->second >= b)
                resp++;
        }
        cout << resp << endl;
    }
    return 0;
}