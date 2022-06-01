#include <iostream>

using namespace std;

string twoBills(int change) {
    int bills[] = {2, 5, 10, 20, 50, 100};
    int size = sizeof(bills) / sizeof(int);
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (bills[i]+bills[j] == change) {
                return "possible";
            }
        }
    }

    return "impossible";
}

int main() {
    int n, m;
    while (cin >> n >> m && n+m) {
        cout << twoBills(m-n) << "\n";
    }
    
    return 0;
}