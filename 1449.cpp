/*
 Resolucao:
 Uso de estrutura de dados map (arvore binaria)
 e processamento de strings para gerar uma biblioteca
 que traduza uma dada frase. As chaves sao strings simples
 */
#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t, m, n;
    cin >> t;
    while (t--) {
        cin >> m >> n;
        cin.ignore();
        string word, trad, resp;
        unordered_map<string, string> dicc;
        while (m--) {
            getline(cin, word);
            getline(cin, trad);
            dicc.insert(mp(word, trad));
        }
        while (n--) {
            getline(cin, resp);
            istringstream buffer(resp);
            string b;
            int q = 0;
            while (buffer >> b) {
                if (q++)
                    cout << " ";
                if (dicc.count(b))
                    cout << dicc[b];
                else
                    cout << b;
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}