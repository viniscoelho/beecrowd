#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, t = 1;
    cin >> n;
    for (int k = 0; k < n; ++k) {
        cout << "Instancia " << t++ << "\n";
        int sudoku[9][9];
        bool flag = true, regiao[9][9], coluna[9][9];
        for (int i = 0; i < 9; ++i) {
            for (int j = i; j < 9; ++j) {
                regiao[i][j] = regiao[j][i] = false;
                coluna[i][j] = coluna[j][i] = false;
            }
            regiao[i][i] = coluna[i][i] = false;
        }
        for (int i = 0; i < 9; ++i) {
            bool linha[] = { false, false, false, false, false, false, false, false, false };
            for (int j = 0; j < 9; ++j) {
                cin >> sudoku[i][j];
                if (linha[sudoku[i][j] - 1])
                    flag = false;
                else
                    linha[sudoku[i][j] - 1] = true;
                if (coluna[j][sudoku[i][j] - 1])
                    flag = false;
                else
                    coluna[j][sudoku[i][j] - 1] = true;
                if (i < 3 && j < 3) {
                    if (regiao[0][sudoku[i][j] - 1])
                        flag = false;
                    else
                        regiao[0][sudoku[i][j] - 1] = true;
                } else if (i < 6 && j < 3) {
                    if (regiao[1][sudoku[i][j] - 1])
                        flag = false;
                    else
                        regiao[1][sudoku[i][j] - 1] = true;
                } else if (i < 9 && j < 3) {
                    if (regiao[2][sudoku[i][j] - 1])
                        flag = false;
                    else
                        regiao[2][sudoku[i][j] - 1] = true;
                } else if (i < 3 && j < 6) {
                    if (regiao[3][sudoku[i][j] - 1])
                        flag = false;
                    else
                        regiao[3][sudoku[i][j] - 1] = true;
                } else if (i < 6 && j < 6) {
                    if (regiao[4][sudoku[i][j] - 1])
                        flag = false;
                    else
                        regiao[4][sudoku[i][j] - 1] = true;
                } else if (i < 9 && j < 6) {
                    if (regiao[5][sudoku[i][j] - 1])
                        flag = false;
                    else
                        regiao[5][sudoku[i][j] - 1] = true;
                } else if (i < 3 && j < 9) {
                    if (regiao[6][sudoku[i][j] - 1])
                        flag = false;
                    else
                        regiao[6][sudoku[i][j] - 1] = true;
                } else if (i < 6 && j < 9) {
                    if (regiao[7][sudoku[i][j] - 1])
                        flag = false;
                    else
                        regiao[7][sudoku[i][j] - 1] = true;
                } else if (i < 9 && j < 9) {
                    if (regiao[8][sudoku[i][j] - 1])
                        flag = false;
                    else
                        regiao[8][sudoku[i][j] - 1] = true;
                }
            }
        }
        if (flag)
            cout << "SIM\n\n";
        else
            cout << "NAO\n\n";
    }

    return 0;
}
