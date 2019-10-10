/*
	Resolucao:
		Processamento de strings
		Cada desenho em braile representa um numero, que sera mapeado
		e um numero representa um desenho em braile
		As consultas requerem que seja exibido um numero em braile dado o decimal
		e o decimal dado a cadeia em braile
*/

#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int d;
    string cod[3][20];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 20; j += 2) {
            if ((j == 2 || j == 4 || j == 10 || j == 16) && i == 0) {
                cod[i][j] = '*';
                cod[i][j + 1] = '.';
            }
            if ((j == 6 || j == 8 || j == 12 || j == 14) && i == 0) {
                cod[i][j] = '*';
                cod[i][j + 1] = '*';
            }
            if ((j == 18 || j == 0) && i == 0) {
                cod[i][j] = '.';
                cod[i][j + 1] = '*';
            }
            if ((j == 2 || j == 6) && i == 1) {
                cod[i][j] = '.';
                cod[i][j + 1] = '.';
            }
            if ((j == 4 || j == 12 || j == 18) && i == 1) {
                cod[i][j] = '*';
                cod[i][j + 1] = '.';
            }
            if ((j == 8 || j == 10) && i == 1) {
                cod[i][j] = '.';
                cod[i][j + 1] = '*';
            }
            if ((j == 14 || j == 16 || j == 0) && i == 1) {
                cod[i][j] = '*';
                cod[i][j + 1] = '*';
            }
            if (i == 2) {
                cod[i][j] = '.';
                cod[i][j + 1] = '.';
            }
        }
    }
    for (cin >> d; d != 0; cin >> d) {
        char l;
        string num, bra[3];
        string::iterator str;
        cin.ignore();
        cin >> l;
        if (l == 'S') {
            cin.ignore();
            getline(cin, num);
            str = num.begin();
            for (int i = 0; i < 3; ++i) {
                int p = 0;
                char resp[30] = "";
                for (str = num.begin(); str != num.end(); str++) {
                    if (p > 0)
                        cout << " ";
                    if ((*str) == '1') {
                        cout << cod[i][2];
                        cout << cod[i][3];
                    }
                    if ((*str) == '2') {
                        cout << cod[i][4];
                        cout << cod[i][5];
                    }
                    if ((*str) == '3') {
                        cout << cod[i][6];
                        cout << cod[i][7];
                    }
                    if ((*str) == '4') {
                        cout << cod[i][8];
                        cout << cod[i][9];
                    }
                    if ((*str) == '5') {
                        cout << cod[i][10];
                        cout << cod[i][11];
                    }
                    if ((*str) == '6') {
                        cout << cod[i][12];
                        cout << cod[i][13];
                    }
                    if ((*str) == '7') {
                        cout << cod[i][14];
                        cout << cod[i][15];
                    }
                    if ((*str) == '8') {
                        cout << cod[i][16];
                        cout << cod[i][17];
                    }
                    if ((*str) == '9') {
                        cout << cod[i][18];
                        cout << cod[i][19];
                    }
                    if ((*str) == '0') {
                        cout << cod[i][0];
                        cout << cod[i][1];
                    }
                    p++;
                }
                cout << "\n";
            }
        } else {
            cin.ignore();
            for (int i = 0; i < 3; ++i)
                getline(cin, bra[i]);
            int a = 0;
            for (int j = 0; j < bra[a].size(); j += 3) {
                if (bra[a][j] == '*' && bra[a][j + 1] == '.') {
                    if (bra[a + 1][j] == '.' && bra[a + 1][j + 1] == '.')
                        cout << "1";
                    if (bra[a + 1][j] == '*' && bra[a + 1][j + 1] == '.')
                        cout << "2";
                    if (bra[a + 1][j] == '.' && bra[a + 1][j + 1] == '*')
                        cout << "5";
                    if (bra[a + 1][j] == '*' && bra[a + 1][j + 1] == '*')
                        cout << "8";
                }
                if (bra[a][j] == '*' && bra[a][j + 1] == '*') {
                    if (bra[a + 1][j] == '.' && bra[a + 1][j + 1] == '.')
                        cout << "3";
                    if (bra[a + 1][j] == '.' && bra[a + 1][j + 1] == '*')
                        cout << "4";
                    if (bra[a + 1][j] == '*' && bra[a + 1][j + 1] == '.')
                        cout << "6";
                    if (bra[a + 1][j] == '*' && bra[a + 1][j + 1] == '*')
                        cout << "7";
                }
                if (bra[a][j] == '.' && bra[a][j + 1] == '*') {
                    if (bra[a + 1][j] == '*' && bra[a + 1][j + 1] == '.')
                        cout << "9";
                    if (bra[a + 1][j] == '*' && bra[a + 1][j + 1] == '*')
                        cout << "0";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
