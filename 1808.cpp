#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <iomanip>
#define pb push_back
#define mp make_pair

using namespace std;

typedef long long int64;

int main()
{
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int tam = s.size();
    double resp = 0.0, count = 0.0;
    for (int i = 0; i < tam; i++)
    {
        if (i + 1 < tam && s[i] == '1' && s[i + 1] == '0')
        {
            resp += 10;
            i++;
        }
        else
            resp += (s[i] - 48);
        count++;
    }
    cout << fixed << setprecision(2) << resp / count << endl;
    return 0;
}