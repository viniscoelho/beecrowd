#include <iostream>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <map>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int64;

map<int, int> offices;

int main(){
    ios::sync_with_stdio(false);
    int64 a, b;
    cin >> a >> b;
    int64 l = (a*(a+1))/2, h = (b*(b+1))/2;
    cout << h - l + a << endl;
    return 0;
}