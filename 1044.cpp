#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	if ( max(a, b) % min(a, b) == 0 ) cout << "Sao Multiplos\n";
	else cout << "Nao sao Multiplos\n";
	return 0;
}
