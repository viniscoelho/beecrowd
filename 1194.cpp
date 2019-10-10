#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;
typedef long long int64;

struct No {
    char valor;
    No *esquerdo, *direito;
};

void PosOrdem(No* inicio)
{
    if (inicio != NULL) {
        PosOrdem(inicio->esquerdo);
        PosOrdem(inicio->direito);
        cout << inicio->valor;
    }
}

int64 pre;
No* construct_tree(string preorder, string inorder, int s, int f)
{
    if (s > f)
        return NULL;
    int64 i, index;
    No* temp = new No;
    temp->valor = preorder[pre++];
    for (i = s; i <= f; i++)
        if (inorder[i] == temp->valor)
            index = i;
    temp->esquerdo = construct_tree(preorder, inorder, s, index - 1);
    temp->direito = construct_tree(preorder, inorder, index + 1, f);
    return temp;
}

int main()
{
    ios::sync_with_stdio(false);
    string a, b;
    int t, p;
    cin >> t;
    while (t--) {
        cin >> p >> a >> b;
        pre = 0;
        No* raiz = construct_tree(a, b, 0, a.size() - 1);
        PosOrdem(raiz);
        cout << "\n";
    }
    return 0;
}