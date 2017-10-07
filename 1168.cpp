#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <iomanip>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	cin.ignore();
    while ( t-- ){
		string resp;
		getline(cin, resp);
		int cont = 0;
		for ( int i = 0; i < resp.size(); i++ ){
			if ( resp[i] == '1' ) cont += 2;
			else if ( resp[i] == '2' ) cont += 5;
			else if ( resp[i] == '3' ) cont += 5;
			else if ( resp[i] == '4' ) cont += 4;
			else if ( resp[i] == '5' ) cont += 5;
			else if ( resp[i] == '6' ) cont += 6;
			else if ( resp[i] == '7' ) cont += 3;
			else if ( resp[i] == '8' ) cont += 7;
			else if ( resp[i] == '9' ) cont += 6;
			else if ( resp[i] == '0' ) cont += 6;
		}
		cout << cont << " leds\n";
    }
    return 0;
}

