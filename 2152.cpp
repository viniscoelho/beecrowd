#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int h, m, o;
        cin >> h >> m >> o;
        cout << setw(2) << setfill('0') <<  h << ":" << setw(2) << setfill('0')  << m
            << " - " << (o ? "A porta abriu!" : "A porta fechou!") << "\n";
    }
    
    return 0;
}