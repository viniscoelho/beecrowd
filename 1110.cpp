#include <algorithm>
#include <deque>
#include <iostream>
#include <map>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#define mp make_pair

using namespace std;

typedef pair<string, string> ss;
typedef map<string, string> mss;
typedef map<string, int> msi;

int main()
{
    ios::sync_with_stdio(false);
    int n, resp = 0;
    for (cin >> n; n != 0; cin >> n) {
        cout << "Discarded cards:";
        deque<int> scard;
        int count = 0;
        for (int i = n; i > 0; i--)
            scard.push_front(i);
        while (scard.front() != scard.back()) {
            if (count == 0)
                cout << " " << scard.front();
            else
                cout << ", " << scard.front();
            count++;
            scard.pop_front();
            scard.push_back(scard.front());
            scard.pop_front();
        }
        cout << endl
             << "Remaining card: " << scard.front() << "\n";
    }
    return 0;
}
