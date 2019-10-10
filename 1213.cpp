#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <string>
#include <vector>
#define mp make_pair
#define pb push_back
#define MAX 210
#define INF 1000000000000000LL

using namespace std;

typedef long long int64;
typedef pair<int, int> ii;
typedef vector<int> vi;
const double EPS = 1e-10;

char comm[100];

int main()
{
    int a, s, t;
    while (scanf("%d", &t) != EOF) {
        int a = 1, b = 1, c = 0;
        while (a) {
            a = b % t;
            b = (b * 10 + 1) % t;
            c++;
        }
        printf("%d\n", c);
    }
    return 0;
}
