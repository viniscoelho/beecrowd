#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int64;

typedef pair<int, string> is;

int main()
{
    ios::sync_with_stdio(false);
    string s;
    while (cin >> s) {
        char watch[15][70] = {
            { " ____________________________________________" },
            { "|                                            |" },
            { "|    ____________________________________    |_" },
            { "|   |                                    |   |_)" },
            { "|   |   8         4         2         1  |   |" },
            { "|   |                                    |   |" },
            { "|   |   o         o         o         o  |   |" },
            { "|   |                                    |   |" },
            { "|   |                                    |   |" },
            { "|   |   o     o     o     o     o     o  |   |" },
            { "|   |                                    |   |" },
            { "|   |   32    16    8     4     2     1  |   |_" },
            { "|   |____________________________________|   |_)" },
            { "|                                            |" },
            { "|____________________________________________|" }
        };

        int hr = (s[0] - 48) * 10 + (s[1] - 48);
        int min = (s[3] - 48) * 10 + (s[4] - 48);

        if (hr - 8 >= 0)
            hr -= 8;
        else
            watch[6][8] = ' ';

        if (hr - 4 >= 0)
            hr -= 4;
        else
            watch[6][18] = ' ';

        if (hr - 2 >= 0)
            hr -= 2;
        else
            watch[6][28] = ' ';

        if (!hr)
            watch[6][38] = ' ';

        if (min - 32 >= 0)
            min -= 32;
        else
            watch[9][8] = ' ';

        if (min - 16 >= 0)
            min -= 16;
        else
            watch[9][14] = ' ';

        if (min - 8 >= 0)
            min -= 8;
        else
            watch[9][20] = ' ';

        if (min - 4 >= 0)
            min -= 4;
        else
            watch[9][26] = ' ';

        if (min - 2 >= 0)
            min -= 2;
        else
            watch[9][32] = ' ';

        if (!min)
            watch[9][38] = ' ';

        for (int i = 0; i < 15; i++)
            cout << watch[i] << endl;
        cout << endl;
    }
    return 0;
}