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
	int a, c = 1, t;
	cin >> t;
	cin.ignore();
	while ( t-- ){
		string resp;
		getline(cin, resp);
		reverse(resp.begin(), resp.begin() + resp.size()/2);
		reverse(resp.begin() + resp.size()/2, resp.end());
		cout << resp << "\n";
    }
    return 0;
}