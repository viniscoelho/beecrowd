#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<int, int> prime_pot;
typedef long long int64;

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) && a + b) {
        unordered_map<int, int> alice, betty;
        unordered_map<int, int>::iterator it;
        int p, al = 0, be = 0;
        for (int i = 0; i < a; i++) {
            scanf("%d", &p);
            alice.insert(mp(p, 1));
        }
        for (int i = 0; i < b; i++) {
            scanf("%d", &p);
            betty.insert(mp(p, 1));
        }
        for (it = betty.begin(); it != betty.end(); it++)
            if (!alice.count(it->first))
                be++;
        for (it = alice.begin(); it != alice.end(); it++)
            if (!betty.count(it->first))
                al++;
        printf("%d\n", min(al, be));
    }
    return 0;
}
