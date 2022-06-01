#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string g;
        cin >> g;
        cout << fixed << setprecision(2) << (double)g.size()/100. << "\n";
    }
    
    return 0;
}