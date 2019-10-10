#include <cstring>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <map>
#define mp make_pair

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	map<int, string> ddd;
	ddd.insert(mp(61, "Brasilia"));
	ddd.insert(mp(71, "Salvador"));
	ddd.insert(mp(11, "Sao Paulo"));
	ddd.insert(mp(21, "Rio de Janeiro"));
	ddd.insert(mp(32, "Juiz de Fora"));
	ddd.insert(mp(19, "Campinas"));
	ddd.insert(mp(27, "Vitoria"));
	ddd.insert(mp(31, "Belo Horizonte"));

	int a;
	cin >> a;
	cout << ddd[a] << "\n";

	return 0;
}
