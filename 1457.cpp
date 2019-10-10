#include <algorithm>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#define mp make_pair
#define pb push_back

using namespace std;

typedef pair<int, int> ii;
typedef unsigned long long int64;

const int INF = 0x3f3f3f3f;

int64 num;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    cin.ignore();
    while (n--) {
        string a, resp;
        getline(cin, resp);
        int64 c = 0, i = 0, x = 1;

        while (i < resp.size() && resp[i] >= '0' && resp[i] <= '9') {
            a += resp[i];
            i++;
        }
        while (i < resp.size() && resp[i] == '!') {
            c++, i++;
        }
        int64 numA, numB;
        istringstream test(a);
        test >> numA;
        numB = numA;
        while (numB > c * x) {
            numA *= (numB - c * x);
            x++;
        }
        cout << numA << "\n";
    }
    return 0;
}
