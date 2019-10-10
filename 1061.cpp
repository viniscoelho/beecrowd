#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

typedef long long int64;

int main()
{
    ios::sync_with_stdio(false);
    string a;
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;
    cin >> a >> d1;
    cin >> h1 >> a >> m1 >> a >> s1;
    cin >> a >> d2;
    cin >> h2 >> a >> m2 >> a >> s2;
    int64 ans = d1 * 86400 + h1 * 3600 + m1 * 60 + s1;
    int64 resp = d2 * 86400 + h2 * 3600 + m2 * 60 + s2;
    resp -= ans;
    cout << resp / 86400 << " dia(s)\n";
    resp -= (resp / 86400) * 86400;
    cout << resp / 3600 << " hora(s)\n";
    resp -= (resp / 3600) * 3600;
    cout << resp / 60 << " minuto(s)\n";
    resp -= (resp / 60) * 60;
    cout << resp << " segundo(s)\n";
    return 0;
}
