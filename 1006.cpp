#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
#define mp make_pair
#define pb push_back

using namespace std;

typedef unsigned long long uint64;
typedef pair<int, int> ii;

int main(){
    ios::sync_with_stdio(false);
    float a, b, c;
    cin >> a >> b >> c;
    cout << "MEDIA = " << fixed << setprecision(1) << (a*0.2 + b*0.3 + c*0.5) << "\n";
    return 0;
}

