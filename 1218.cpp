#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int a, c = 1, t;
    while (cin >> t) {
        if (c > 1)
            cout << "\n";
        cout << "Caso " << c++ << ":\n";
        cin.ignore();
        int pares = 0;
        int f = 0, m = 0;
        string resp;
        getline(cin, resp);
        for (int i = 0; i < resp.size(); ++i) {
            string par;
            while (i < resp.size() && resp[i] != ' ') {
                par += resp[i];
                i++;
            }
            if (par.size() > 1) {
                istringstream buffer(par);
                int value;
                buffer >> value;
                if (value == t) {
                    pares++;
                    if (resp[i + 1] == 'F')
                        f++;
                    else
                        m++;
                }
            }
        }
        cout << "Pares Iguais: " << pares << "\n";
        cout << "F: " << f << "\n";
        cout << "M: " << m << "\n";
    }
    return 0;
}
