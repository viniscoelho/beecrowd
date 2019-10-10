#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back

using namespace std;

typedef pair<int, int> ii;
typedef pair<int, char> ic;
typedef vector<ii> vii;

char word[300];

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while (n--) {
        priority_queue<ic> pq;
        unordered_map<char, int> bib;
        unordered_map<char, int>::iterator u;
        pair<unordered_map<char, int>::iterator, bool> ret;
        scanf(" %[^\n]", word);
        int word_size = strlen(word);
        for (int i = 0; i < word_size; ++i) {
            if (word[i] != ' ') {
                ret = bib.insert(mp(tolower(word[i]), 1));
                if (!ret.second)
                    bib[tolower(word[i])]++;
            }
        }
        int m = 0;
        for (u = bib.begin(); u != bib.end(); ++u) {
            pq.push(mp(u->second, -int(u->first)));
            m = max(m, u->second);
        }
        while (!pq.empty() && pq.top().first == m) {
            printf("%c", tolower(-pq.top().second));
            pq.pop();
        }
        printf("\n");
    }
    return 0;
}
