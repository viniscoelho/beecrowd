#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
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
#define MAXV 200100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int64;

int main()
{
    double d;
    int tn, n;
    cin >> n >> d;
    vector<int> teams;
    string s;
    while (cin >> tn) {
        cout << right << setfill(' ') << setw(3) << tn << ": ";
        double sec, temp = 0.0;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            cin >> s;
            if (flag)
                continue;
            if (s[0] == '-')
                flag = true;
            sec = (s[0] - 48) * 3600 + ((s[2] - 48) * 10 + (s[3] - 48)) * 60 + ((s[5] - 48) * 10 + (s[6] - 48));
            sec = (sec / d) / 60;
            temp += sec;
        }
        if (flag)
            cout << "-\n";
        else {
            double seg = round((temp - floor(temp)) * 60.0);
            if (seg == 60.0) {
                temp = ceil(temp);
                seg = 0.0;
            }
            cout << fixed << setprecision(0) << floor(temp) << ":" << setw(2) << setfill('0') << seg << " min/km\n";
        }
    }
    return 0;
}