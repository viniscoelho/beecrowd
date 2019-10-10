#include <iostream>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <map>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int64;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    cin.ignore(1);
    for (int i = 1; i <= t; i++)
    {
        cout << "Instancia " << i << endl;
        string a, b, c;
        getline(cin, a);
        getline(cin, b);
        getline(cin, c);
        int cA = 0, cB = 0, tam = a.size();
        int minA = 10000, minB = 10000;
        for (int i = 0; i < tam; i++)
        {
            if (a[i] == b[i] && a[i] == c[i])
            {
                cA++, cB++;
            }
            else if (a[i] == b[i] && a[i] != c[i])
            {
                cA++;
                if (minA != 10000)
                    continue;
                minA = min(minA, 0);
                minB = min(minB, i + 1);
            }
            else if (a[i] != b[i] && a[i] == c[i])
            {
                cB++;
                if (minB != 10000)
                    continue;
                minA = min(minA, i + 1);
                minB = min(minB, 0);
            }
        }
        if (cA > cB)
            cout << "time 1\n";
        else if (cA < cB)
            cout << "time 2\n";
        else if (cA == cB && minA < minB)
            cout << "time 1\n";
        else if (cA == cB && minA > minB)
            cout << "time 2\n";
        else
            cout << "empate\n";
        cout << endl;
    }
    return 0;
}