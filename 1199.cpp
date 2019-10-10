#include <bits/stdc++.h>
#define mp make_pair
#define INF 0x3f3f3f3f

using namespace std;

typedef long long int64;

int main()
{
    ios::sync_with_stdio(false);
    unordered_map<char, string> h;
    h.insert(mp('0', "0000"));
    h.insert(mp('1', "0001"));
    h.insert(mp('2', "0010"));
    h.insert(mp('3', "0011"));
    h.insert(mp('4', "0100"));
    h.insert(mp('5', "0101"));
    h.insert(mp('6', "0110"));
    h.insert(mp('7', "0111"));
    h.insert(mp('8', "1000"));
    h.insert(mp('9', "1001"));
    h.insert(mp('A', "1010"));
    h.insert(mp('B', "1011"));
    h.insert(mp('C', "1100"));
    h.insert(mp('D', "1101"));
    h.insert(mp('E', "1110"));
    h.insert(mp('F', "1111"));
    h.insert(mp('a', "1010"));
    h.insert(mp('b', "1011"));
    h.insert(mp('c', "1100"));
    h.insert(mp('d', "1101"));
    h.insert(mp('e', "1110"));
    h.insert(mp('f', "1111"));
    int n;
    string a;
    while (cin >> a) {
        if (a[0] == '-')
            break;
        if (a.size() > 2 && a[0] == '0' && a[1] == 'x') {
            string resp;
            int64 num = 0;
            for (int i = 2; i < a.size(); ++i)
                resp += h[a[i]];
            for (int i = 0; i < resp.size(); ++i) {
                if (resp[i] == '1')
                    num ^= 1;
                num <<= 1;
            }
            num >>= 1;
            cout << num << "\n";
        } else {
            string ans;
            istringstream str(a);
            int64 num;
            str >> num;
            while (num) {
                if (num % 16 == 0)
                    ans += '0';
                else if (num % 16 == 1)
                    ans += '1';
                else if (num % 16 == 2)
                    ans += '2';
                else if (num % 16 == 3)
                    ans += '3';
                else if (num % 16 == 4)
                    ans += '4';
                else if (num % 16 == 5)
                    ans += '5';
                else if (num % 16 == 6)
                    ans += '6';
                else if (num % 16 == 7)
                    ans += '7';
                else if (num % 16 == 8)
                    ans += '8';
                else if (num % 16 == 9)
                    ans += '9';
                else if (num % 16 == 10)
                    ans += 'A';
                else if (num % 16 == 11)
                    ans += 'B';
                else if (num % 16 == 12)
                    ans += 'C';
                else if (num % 16 == 13)
                    ans += 'D';
                else if (num % 16 == 14)
                    ans += 'E';
                else if (num % 16 == 15)
                    ans += 'F';
                num /= 16;
            }
            ans += "x0";
            reverse(ans.begin(), ans.end());
            cout << ans << "\n";
        }
    }
    return 0;
}
