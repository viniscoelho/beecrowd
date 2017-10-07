#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <map>
#include <iomanip>
#include <unordered_set>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;
//using namespace tr1;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int64;

typedef pair<int, string> is;

char matrix[60][60];

unordered_set<int> sums;

void initialize()
{
    for ( int i = 0; i <= 100; i++ )
    {
        for ( int j = 0; j <= 100; j++ )
            sums.insert(i*i + j*j);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    initialize();
    while ( cin >> n )
    {
        cout << ((sums.count(n)) ? "YES\n" : "NO\n"); 
    }
    return 0;
}