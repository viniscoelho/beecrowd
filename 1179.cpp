#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <vector>
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f

using namespace std;
typedef long long int64;

int main()
{
    queue<int> odd, even;
    int a, k = 0;
    for (int i = 0; i < 15; ++i) {
        scanf("%lld", &a);
        if (abs(a) % 2)
            odd.push(a);
        else
            even.push(a);
        if (odd.size() == 5) {
            k = 0;
            while (!odd.empty()) {
                printf("impar[%d] = %d\n", k++, odd.front());
                odd.pop();
            }
        } else if (even.size() == 5) {
            k = 0;
            while (!even.empty()) {
                printf("par[%d] = %d\n", k++, even.front());
                even.pop();
            }
        }
    }
    k = 0;
    while (!odd.empty()) {
        printf("impar[%d] = %d\n", k++, odd.front());
        odd.pop();
    }
    k = 0;
    while (!even.empty()) {
        printf("par[%d] = %d\n", k++, even.front());
        even.pop();
    }
    return 0;
}
