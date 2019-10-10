#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 5010
#define pb push_back
#define mp make_pair

using namespace std;

typedef long long int64;

char word[60];

int main()
{
    while (scanf(" %[^\n]", word)) {
        int word_size = strlen(word);
        string resp;
        bool flag = false;
        REP(i, word_size)
        {
            if (isdigit(word[i]))
                resp += word[i];
            else if (word[i] == 'l')
                resp += '1';
            else if (word[i] == 'o' || word[i] == 'O')
                resp += '0';
            else if (word[i] != ' ' && word[i] != ',') {
                flag = true;
                break;
            }
        }
        istringstream buffer(resp);
        int64 num;
        buffer >> num;
        if (flag || !resp.size() || num > 2147483647)
            puts("error");
        else
            cout << num << "\n";
    }
    return 0;
}