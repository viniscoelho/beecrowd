#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <cstring>
#include <climits>

using namespace std;

int squares[10100], visited[10100], v = 1;
const int INF = INT_MAX;

int main()
{
    ios::sync_with_stdio(false);
    int p, s, n; //number of players, squares, dices
    int t[3], d[2];
    
    while ( cin >> p >> s && p+s )
    {
        memset(squares, 0, sizeof squares);
        int player = 1;
        for ( int i = 0; i < 3; i++ ){
            cin >> t[i];
        }
        cin >> n;
        int winner = 0;
        for ( int k = 0; k < n; k++ )
        {
            if ( visited[player] == v )
            {
                visited[player] = 0;
                player = (player % p) + 1;
                k--;
                continue;
            }
            for ( int i = 0; i < 2; i++ ) cin >> d[i];
            if ( winner ) continue;
            squares[player] += d[0]+d[1];
            if ( squares[player] == t[0] || squares[player] == t[1] || squares[player] == t[2] )
                visited[player] = v;
            else if ( squares[player] > s ) winner = player; 
            //after a turn
            player = (player % p) + 1;
        }
        v++;
        cout << winner << "\n";
    }
    
    return 0;
}