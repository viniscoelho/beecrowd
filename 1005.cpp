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
    float a, b;
    cin >> a >> b;
    cout << "MEDIA = " << fixed << setprecision(5) << ((a*0.35+b*0.75)/11)*10 << "\n";
    return 0;
}

