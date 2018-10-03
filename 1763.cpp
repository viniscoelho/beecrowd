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
#include <unordered_map>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;
//using namespace tr1;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int64;

typedef pair<int, string> is;

int readInt ()
{
    bool minus = false;
    int result = 0;
    char ch;
    ch = getchar_unlocked();
    while (true)
    {
        if (ch == '-') break;
        if (ch >= '0' && ch <= '9') break;
        ch = getchar_unlocked();
    }
    if (ch == '-') minus = true; else result = ch-'0';
    while (true)
    {
        ch = getchar_unlocked();
        if (ch < '0' || ch > '9') break;
        result = result*10 + (ch - '0');
    }
    if (minus) return -result;
    else return result;
}

unordered_map<string, string> xmas;

void initialize()
{
    xmas["brasil"] = "Feliz Natal!";
    xmas["alemanha"] = "Frohliche Weihnachten!";
    xmas["austria"] = "Frohe Weihnacht!";
    xmas["coreia"] = "Chuk Sung Tan!";
    xmas["espanha"] = "Feliz Navidad!";
    xmas["grecia"] = "Kala Christougena!";
    xmas["estados-unidos"] = "Merry Christmas!";
    xmas["inglaterra"] = "Merry Christmas!";
    xmas["australia"] = "Merry Christmas!";
    xmas["portugal"] = "Feliz Natal!";
    xmas["suecia"] = "God Jul!";
    xmas["turquia"] = "Mutlu Noeller";
    xmas["argentina"] = "Feliz Navidad!";
    xmas["chile"] = "Feliz Navidad!";
    xmas["mexico"] = "Feliz Navidad!";
    xmas["antardida"] = "Merry Christmas!";
    xmas["canada"] = "Merry Christmas!";
    xmas["irlanda"] = "Nollaig Shona Dhuit!";
    xmas["belgica"] = "Zalig Kerstfeest!";
    xmas["italia"] = "Buon Natale!";
    xmas["libia"] = "Buon Natale!";
    xmas["siria"] = "Milad Mubarak!";
    xmas["marrocos"] = "Milad Mubarak!";
    xmas["japao"] = "Merii Kurisumasu!";
}


int main()
{
    ios::sync_with_stdio(false);
    initialize();
    string s;
    while ( cin >> s )
    {
        if ( xmas.count(s) ) cout << xmas[s] << endl;
        else cout << "--- NOT FOUND ---\n";
    }
    return 0;
}