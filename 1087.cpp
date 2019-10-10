#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int x1, y1, x2, y2;
    for (cin >> x1 >> y1 >> x2 >> y2; x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0; cin >> x1 >> y1 >> x2 >> y2) {
        if (x1 == x2 && y1 == y2)
            cout << "0\n";
        else {
            if (x1 == x2 && y1 != y2)
                cout << "1\n";
            else {
                if (x1 != x2 && y1 == y2)
                    cout << "1\n";
                else {
                    bool flag = false;
                    if (x2 < x1 && y2 < y1) {
                        while (x1 > 0 && y1 > 0) {
                            if (x1 == x2 && y1 == y2) {
                                cout << "1\n";
                                flag = true;
                            }
                            x1--;
                            y1--;
                        }
                        if (!flag)
                            cout << "2\n";
                    } else {
                        if (x2 > x1 && y2 > y1) {
                            while (x1 < 9 && y1 < 9) {
                                if (x1 == x2 && y1 == y2) {
                                    cout << "1\n";
                                    flag = true;
                                }
                                x1++;
                                y1++;
                            }
                            if (!flag)
                                cout << "2\n";
                        } else {
                            if (x2 > x1 && y2 < y1) {
                                while (x1 < 9 && y1 > 0) {
                                    if (x1 == x2 && y1 == y2) {
                                        cout << "1\n";
                                        flag = true;
                                    }
                                    x1++;
                                    y1--;
                                }
                                if (!flag)
                                    cout << "2\n";
                            } else {
                                if (x2 < x1 && y2 > y1) {
                                    while (x1 > 0 && y1 < 9) {
                                        if (x1 == x2 && y1 == y2) {
                                            cout << "1\n";
                                            flag = true;
                                        }
                                        x1--;
                                        y1++;
                                    }
                                    if (!flag)
                                        cout << "2\n";
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
