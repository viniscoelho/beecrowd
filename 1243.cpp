#include <algorithm>
#include <cctype>
#include <deque>
#include <iostream>
#include <queue>
#include <sstream>
#include <string>
#include <vector>
#define mp make_pair
#define pf push_front
#define pb push_back

using namespace std;

typedef long long int64;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;

char word[110];

int main()
{
    string a;
    while (scanf(" %[^\n]", word)) {
        istringstream str(word);
        int sum = 0, t = 0;
        while (str >> a) {
            bool p = false, sp = false;
            for (int i = a.size() - 1; i >= 0; --i) {
                if (a.size() - 1 == i && isalpha(a[i]))
                    sp = true;
                else if (a.size() - 1 == i && a[i] == '.')
                    p = true;
                else if (!isalpha(a[i])) {
                    p = sp = false;
                    break;
                }
            }
            if (p) {
                sum += a.size() - 1;
                t++;
            } else if (sp) {
                sum += a.size();
                t++;
            }
        }
        if (!t)
            puts("250");
        else if (t && sum / t <= 3)
            puts("250");
        else if (t && sum / t <= 5)
            puts("500");
        else if (t && sum / t >= 6)
            puts("1000");
    }
    return 0;
}
