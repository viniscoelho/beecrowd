/*
	Resolucao:
		Cria um vector de botas da esquerda e da direita
		Entao a partir de cada bota da direita, tenta  achar um outro par
		da esquerda que nao foi utilizado ainda
		E entao imprime o numero de pares obtidos
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, p;
    while (cin >> n) {
        vector<int> botasd, botase;
        char par;
        for (int i = 0; i < n; ++i) {
            cin >> p >> par;
            if (par == 'D')
                botasd.push_back(p);
            else
                botase.push_back(p);
        }
        bool visitado[botase.size()];
        int sum = 0;
        for (int i = 0; i < botase.size(); ++i)
            visitado[i] = false;
        for (int i = 0; i < botasd.size(); ++i) {
            for (int j = 0; j < botase.size(); ++j) {
                if (botase[j] == botasd[i] && !visitado[j]) {
                    visitado[j] = true;
                    sum++;
                    break;
                }
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
