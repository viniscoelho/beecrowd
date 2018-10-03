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
    int b[5], x;
    vector< vector<int> > books(5);
    for ( int i = 0; i < 5; i++ )
    {
        cin >> b[i]; 
        for ( int j = 0; j < b[i]; j++ )
        {
            cin >> x;
            books[i].pb(x);
        }
    }
    vector<int> results;
    for ( int i = 0; i < b[0]; i++ )
    {
        for ( int j = 0; j < b[1]; j++ )
        {
            for ( int k = 0; k < b[2]; k++ )
            {
                for ( int l = 0; l < b[3]; l++ )
                {
                    for ( int m = 0; m < b[4]; m++ )
                    {
                        results.pb(books[0][i] + books[1][j] + books[2][k] + books[3][l] + books[4][m]);
                    }
                }
            }
        }
    }
    sort(results.begin(), results.end(), greater<int>());
    cin >> x;
    int resp = 0;
    for ( int i = 0; i < x && i < results.size(); i++ ) resp += results[i];
    
    cout << resp << endl;
    return 0;
}