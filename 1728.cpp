#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <unordered_set>
#include <vector>
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
    string str;
    while (cin >> str) {
        int a = -1, b = -1, c = -1;
        for (int i = str.size() - 1; i >= 0; i--) {
            string s = "";
            while (i >= 0 && isdigit(str[i]))
                s += str[i--];
            if (c == -1) {
                stringstream buffer(s);
                buffer >> c;
            } else if (b == -1) {
                stringstream buffer(s);
                buffer >> b;
            } else if (a == -1) {
                stringstream buffer(s);
                buffer >> a;
            }
        }
        cout << ((a + b == c) ? "True\n" : "False\n");
    }
    return 0;
}