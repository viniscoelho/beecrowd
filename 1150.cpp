#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <map>
#define mp make_pair
#define INF 0x3f3f3f3f

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int x, z, sum = 0, c = 0;
    cin >> x >> z;
    while ( x >= z ) cin >> z;
    while ( sum < z ){
        sum += x;
        c++, x++;
    }
    cout << c << "\n";
    return 0;
}