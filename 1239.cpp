#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#define mp make_pair
#define MAX 200

using namespace std;

typedef pair<int, int> ii;

int main()
{
    ios::sync_with_stdio(false);
    string a, b;
    while (getline(cin, a)) {
        bool italic = false, bold = false;
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] == '*' && !bold) {
                cout << "<b>";
                bold = !bold;
            } else if (a[i] == '*' && bold) {
                cout << "</b>";
                bold = !bold;
            } else if (a[i] == '_' && !italic) {
                cout << "<i>";
                italic = !italic;
            } else if (a[i] == '_' && italic) {
                cout << "</i>";
                italic = !italic;
            } else
                cout << a[i];
        }
        cout << "\n";
    }
    return 0;
}
