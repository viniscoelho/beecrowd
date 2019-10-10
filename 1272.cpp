#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAXN 110
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3FFFFFFFFFLL
#define pb push_back
#define mp make_pair

using namespace std;

typedef vector<int> vi;
typedef long long int64;
typedef unsigned long long uint64;
typedef pair<double, double> dd;
typedef pair<string, dd> sdd;

char *p, a, word[MAXN];

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--) {
        scanf(" %[^\n]", word);
        p = strtok(word, " ");
        int ans = 0, cont = 0;
        while (p != NULL) {
            char a = *p;
            printf("%c", a);
            p = strtok(NULL, " ");
        }
        printf("\n");
    }
    return 0;
}