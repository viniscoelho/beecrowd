#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string rna;
    while ( cin >> rna ){
          stack<char> rnaa;
          int sum = 0;
          for ( int i = 0; i < rna.size(); ++i ){
              if ( rnaa.empty() ) rnaa.push(rna[i]);
              else {
                   if ( rnaa.top() == 'B' && rna[i] == 'S' || rnaa.top() == 'S' && rna[i] == 'B' ){
                      rnaa.pop();
                      sum++;
                   }
                   else {
                        if ( rnaa.top() == 'C' && rna[i] == 'F' || rnaa.top() == 'F' && rna[i] == 'C' ){
                           rnaa.pop();
                           sum++;
                        }
                        else rnaa.push(rna[i]);
                   }
              }
          }
          cout << sum << "\n";
    }
    return 0;
}