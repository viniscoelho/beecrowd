#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

char stack[1010], resp[1010];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf(" %[^\n]s", &resp);
        int topo = 0, ans = 0;
        for (int j = 0; j < strlen(resp); ++j) {
            if (topo == 0 && resp[j] != '.') {
                stack[topo] = resp[j];
                topo++;
            } else if (stack[topo - 1] == '<' && resp[j] == '>') {
                topo--;
                ans++;
            } else if (resp[j] != '.') {
                stack[topo] = resp[j];
                topo++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
