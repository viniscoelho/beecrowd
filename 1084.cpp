#include <iostream>
#include <stack>
#include <queue>

using namespace std;

char number[100010];

int main( ){
    ios::sync_with_stdio(false);
    int d, n;
    for ( cin >> n >> d; d != 0 && n != 0; cin >> n >> d ){
        cin.ignore();
        cin >> number;
        int k = 0, tam = 0, cont = 0;
        stack<char> num, resp;
        while ( cont <= d && k < n){
              char c = number[k];
              if ( num.empty() ){
                 num.push(c);
                 ++k;
              }
              else {
                   if ( num.top() < c && cont < d ){
                      num.pop();
                      ++cont;
                   }
                   else {
                        num.push(c);
                        ++k;
                   }
              }
        }
        while ( !num.empty() ){
              resp.push( num.top() );
              num.pop();
        }
        while ( !resp.empty() && tam < n-d ){
              cout << resp.top();
              resp.pop();
              tam++;
        }
        cout << "\n";
    } 
    return 0;
}
