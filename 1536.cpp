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

const int INF = INT_MAX;

string criteriaA(int a, int b)
{
    if ( a - b > 0 ) return "Time 1\n";
    else if ( b - a > 0 ) return "Time 2\n";
    else return "";
}

string criteriaB(int flag)
{
    if ( flag == 1 ) return "Time 1\n";
    else if ( flag == 2 ) return "Time 2\n";
    else return "Penaltis\n";
}

void getWinner(int a, int b, int flag)
{
    string resp = criteriaA(a, b);
    if ( resp == "" ) cout << criteriaB(flag);
    else cout << resp;   
}

int main()
{
    ios::sync_with_stdio(false);
    int p;
    cin >> p;
    int a, b;
    char c;
    while ( p-- )
    {
        int flag = 0;
        int team1 = 0, team2 = 0;
        cin >> a >> c >> b;
        team1 += a, team2 += b;
        cin >> b >> c >> a;
        if ( a > team2 ) flag = 1;
        else if ( team1 > b ) flag = 2;
        team1 += a, team2 += b;
        getWinner(team1, team2, flag);
    }
    
    return 0;
}