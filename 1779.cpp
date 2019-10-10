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
#include <unordered_set>
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

/* Longest Sequence of the maximum repetitive number */

int longestSequence(vector<int> &arr, int maior)
{
    int longest = 0, length = 1, n = arr.size();
    for (int i = 1; i < n; i++)
        if (arr[i] == arr[i - 1] && arr[i] == maior)
            length++;
        else
        {
            if (length > longest)
                longest = length;
            if (longest > n - 1 - i)
                return longest;
            length = 1;
        }
    return (length > longest) ? length : longest;
}

int main()
{
    ios::sync_with_stdio(false);
    int n, a, b;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Caso #" << i << ": ";
        cin >> a;
        vector<int> v;
        int maior = -1;
        for (int j = 0; j < a; j++)
        {
            cin >> b;
            v.pb(b);
            maior = max(maior, b);
        }
        cout << longestSequence(v, maior) << endl;
    }
    return 0;
}