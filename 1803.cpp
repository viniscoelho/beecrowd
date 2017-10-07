#include <iostream>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <map>
#include <sstream>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int64;

vector< vector<int> > matrix(5);

int main()
{
    ios::sync_with_stdio(false);
    string s[4];
    for ( int i = 0; i < 4; i++ )
        cin >> s[i];
    int chain = s[0].size();
    string m[90];
    for ( int i = 0; i < 4; i++ )
    {
        for ( int j = 0; j < chain; j++ )
            m[j] += s[i][j];
    }
    int64 vet[chain];
    for ( int i = 0; i < chain; i++ )
    {
        stringstream buffer(m[i]);
        buffer >> vet[i];
    }
    for ( int i = 1; i < chain-1; i++ )
    {
        cout << (char)((vet[0]*vet[i] + vet[chain-1]) % 257);
    }
    cout << "\n";

    return 0;
}