/*
	Resolucao:
		Determinar a menor combinacao de cartas que derrota a combinacao dada
*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int a, b, c;
    vector<int> king(3);
    for (cin >> king[0] >> king[1] >> king[2]; king[0] != 0 && king[1] != 0 && king[2] != 0; cin >> king[0] >> king[1] >> king[2]) {
        bool p = false, s = false;
        if (king[0] == king[1]) {
            if (king[1] == king[2])
                p = s = true;
            else
                p = true;
        } else {
            if (king[1] == king[2])
                p = true;
            else if (king[0] == king[2])
                p = true;
        }
        sort(king.begin(), king.end());
        if (!p && !s)
            cout << "1 1 2\n";
        else {
            if (!p && s || p && !s) {
                if (king[1] > king[0] && king[1] <= 13 && king[0] < 12) {
                    if (king[0] + 1 != king[1])
                        king[0]++;
                    else
                        king[0] += 2;
                    sort(king.begin(), king.end());
                    cout << king[0] << " " << king[1] << " " << king[2] << "\n";
                } else {
                    if (king[1] > king[0] && king[0] == 12)
                        cout << "1 1 1\n";
                    else {
                        if (king[2] > king[1] && king[2] < 13)
                            cout << king[0] << " " << king[1] << " " << ++king[2] << "\n";
                        else if (king[2] > king[1] && king[2] == 13)
                            cout << "1 " << ++king[0] << " " << ++king[1] << "\n";
                    }
                }
            } else {
                if (p && s && king[0] < 13)
                    cout << ++king[0] << " " << ++king[1] << " " << ++king[2] << "\n";
                else
                    cout << "*\n";
            }
        }
    }
    return 0;
}
