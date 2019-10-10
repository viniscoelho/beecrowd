#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int v, ano = 0, mes = 0;
	cin >> v;
	int div = v / 365, dia = v;
	if (div >= 1)
	{
		ano = div;
		dia -= 365 * ano;
	}
	div = dia / 30;
	if (div >= 1)
	{
		mes = div;
		dia -= 30 * mes;
	}
	cout << ano << " ano(s)\n";
	cout << mes << " mes(es)\n";
	cout << dia << " dia(s)\n";

	return 0;
}
