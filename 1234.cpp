#include <cstring>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
    int i, j, n;
	string dance;
    while ( getline(cin, dance) ){
		int i = 0;
		for ( j = 0; j < dance.size(); ++j ){
			if ( ( dance[j] >= 'A' && dance[j] <= 'Z' ) || ( dance[j] >= 'a' && dance[j] <= 'z' ) ){
				if ( i % 2 == 0 ) dance[j] = toupper(dance[j]);
				else dance[j] = tolower(dance[j]);
				i++;
			}
		}
		cout << dance << "\n";
    }
    return 0;
}
