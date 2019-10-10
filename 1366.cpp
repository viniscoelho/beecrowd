#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        int tam, v, qtd = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> tam >> v;
            if (v % 2 == 0)
                qtd += v;
            else
                qtd += v - 1;
        }
        cout << qtd / 4 << "\n";
    }
    return 0;
}
