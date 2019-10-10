#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    char str[110], n;
    for (cin >> n >> str; n != '0' && str != "0"; cin >> n >> str)
    {
        int cont = 0;
        for (int i = 0; i < strlen(str); ++i)
            if (cont == 0 && i > 0 && str[i] == '0')
                ;
            else
            {
                if (n != str[i])
                {
                    cout << str[i];
                    cont++;
                }
            }
        if (cont == 0)
            cout << "0\n";
        else
            cout << "\n";
    }
    return 0;
}
