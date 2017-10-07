#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
	int a, h, m;
	cin >> a;
	h = a/3600, a -= h*3600;
	m = a/60, a -= m*60;
	cout << h << ":" << m << ":" << a << "\n";
    return 0;
}
