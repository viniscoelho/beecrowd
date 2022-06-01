#include <iostream>

using namespace std;

int main() {
    string a, b;
    int t = 1;
    while (cin >> a >> b) {
        cout << "Caso #" << t++ << ":\n";
        
        int seq = 0, last_pos = -1;
        size_t pos;
        do {
            pos = b.find(a, last_pos+1);
            if (pos != string::npos) {
                seq++;
                last_pos = pos;
            }
        } while (pos != string::npos);

        if (!seq) {
            cout << "Nao existe subsequencia\n\n";
        } else {
            cout << "Qtd.Subsequencias: " << seq << "\n"
                << "Pos: " << last_pos+1 << "\n\n"; 
        }
    }
    
    return 0;
}