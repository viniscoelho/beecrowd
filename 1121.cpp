#include <stdio.h>

int main()
{
        int n, m, s;
        for (scanf("%d %d %d", &n, &m, &s); n + m + s != 0; scanf("%d %d %d", &n, &m, &s))
        {
                int grafo[n][m];
                char c;
                int i, j, a, b, pos, figuras = 0;
                for (i = 0; i < n; ++i)
                {
                        for (j = 0; j < m; ++j)
                        {
                                scanf(" %c", &c);
                                if (c == '.')
                                        grafo[i][j] = 0;
                                else if (c == '*')
                                        grafo[i][j] = 1;
                                else if (c == 'N')
                                {
                                        grafo[i][j] = 0;
                                        a = i, b = j;
                                        pos = 0;
                                }
                                else if (c == 'L')
                                {
                                        grafo[i][j] = 0;
                                        a = i, b = j;
                                        pos = 1;
                                }
                                else if (c == 'S')
                                {
                                        grafo[i][j] = 0;
                                        a = i, b = j;
                                        pos = 2;
                                }
                                else if (c == 'O')
                                {
                                        grafo[i][j] = 0;
                                        a = i, b = j;
                                        pos = 3;
                                }
                                else if (c == '#')
                                        grafo[i][j] = 2;
                        }
                }
                for (i = 0; i < s; ++i)
                {
                        scanf(" %c", &c);
                        if (pos == 0 && c == 'F')
                        {
                                if (a - 1 >= 0 && grafo[a - 1][b] == 0)
                                        a--;
                                else if (a - 1 >= 0 && grafo[a - 1][b] == 1)
                                {
                                        grafo[a - 1][b] = 0;
                                        figuras++;
                                        a--;
                                }
                        }
                        else if (pos == 1 && c == 'F')
                        {
                                if (b + 1 < m && grafo[a][b + 1] == 0)
                                        b++;
                                else if (b + 1 < m && grafo[a][b + 1] == 1)
                                {
                                        grafo[a][b + 1] = 0;
                                        figuras++;
                                        b++;
                                }
                        }
                        else if (pos == 2 && c == 'F')
                        {
                                if (a + 1 < n && grafo[a + 1][b] == 0)
                                        a++;
                                else if (a + 1 < n && grafo[a + 1][b] == 1)
                                {
                                        grafo[a + 1][b] = 0;
                                        figuras++;
                                        a++;
                                }
                        }
                        else if (pos == 3 && c == 'F')
                        {
                                if (b - 1 >= 0 && grafo[a][b - 1] == 0)
                                        b--;
                                else if (b - 1 >= 0 && grafo[a][b - 1] == 1)
                                {
                                        grafo[a][b - 1] = 0;
                                        figuras++;
                                        b--;
                                }
                        }
                        else if (c == 'D')
                                pos = (pos + 1) % 4;
                        else if (c == 'E')
                                pos = (pos + 3) % 4;
                }
                printf("%d\n", figuras);
        }
}
