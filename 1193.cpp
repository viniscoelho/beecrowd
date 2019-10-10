#include <bits/stdc++.h>
#define mp make_pair
#define INF 0x3f3f3f3f

using namespace std;

typedef unsigned long long int64;

int main()
{
	ios::sync_with_stdio(false);
	unordered_map<char, string> h, hA;
	unordered_map<string, char> b, bA;
	h.insert(mp('0', "0000"));
	h.insert(mp('1', "0001"));
	h.insert(mp('2', "0010"));
	h.insert(mp('3', "0011"));
	h.insert(mp('4', "0100"));
	h.insert(mp('5', "0101"));
	h.insert(mp('6', "0110"));
	h.insert(mp('7', "0111"));
	h.insert(mp('8', "1000"));
	h.insert(mp('9', "1001"));
	h.insert(mp('a', "1010"));
	h.insert(mp('b', "1011"));
	h.insert(mp('c', "1100"));
	h.insert(mp('d', "1101"));
	h.insert(mp('e', "1110"));
	h.insert(mp('f', "1111"));

	hA.insert(mp('0', ""));
	hA.insert(mp('1', "1"));
	hA.insert(mp('2', "10"));
	hA.insert(mp('3', "11"));
	hA.insert(mp('4', "100"));
	hA.insert(mp('5', "101"));
	hA.insert(mp('6', "110"));
	hA.insert(mp('7', "111"));

	b.insert(mp("0000", '0'));
	b.insert(mp("0001", '1'));
	b.insert(mp("0010", '2'));
	b.insert(mp("0011", '3'));
	b.insert(mp("0100", '4'));
	b.insert(mp("0101", '5'));
	b.insert(mp("0110", '6'));
	b.insert(mp("0111", '7'));
	b.insert(mp("1000", '8'));
	b.insert(mp("1001", '9'));
	b.insert(mp("1010", 'a'));
	b.insert(mp("1011", 'b'));
	b.insert(mp("1100", 'c'));
	b.insert(mp("1101", 'd'));
	b.insert(mp("1110", 'e'));
	b.insert(mp("1111", 'f'));

	bA.insert(mp("1", '1'));
	bA.insert(mp("10", '2'));
	bA.insert(mp("11", '3'));
	bA.insert(mp("100", '4'));
	bA.insert(mp("101", '5'));
	bA.insert(mp("110", '6'));
	bA.insert(mp("111", '7'));

	int n, t = 1;
	cin >> n;
	while (n--)
	{
		cout << "Case " << t++ << ":\n";
		string resp, tipo;
		cin >> resp >> tipo;
		if (tipo == "hex")
		{
			int64 num = 0;
			string binar;
			if (resp[0] >= '0' && resp[0] <= '7')
				binar += hA[resp[0]];
			else
				binar += h[resp[0]];
			for (int i = 1; i < resp.size(); ++i)
				binar += h[resp[i]];
			for (int i = 0; i < binar.size(); ++i)
			{
				if (binar[i] == '1')
					num ^= 1;
				num <<= 1;
			}
			num >>= 1;
			cout << num << " dec\n"
				 << binar << " bin\n\n";
		}
		else if (tipo == "bin")
		{
			string ans;
			int64 num = 0;
			for (int i = 0; i < resp.size(); ++i)
			{
				if (resp[i] == '1')
					num ^= 1;
				num <<= 1;
			}
			int cont = resp.size() / 4;
			for (int i = resp.size() - 1; i >= 0; --i)
			{
				string aux;
				while (i >= 0 && aux.size() < 4)
				{
					aux += resp[i];
					i--;
				}
				i++;
				reverse(aux.begin(), aux.end());
				if (cont > 0)
					ans += b[aux];
				else
					ans += bA[aux];
				cont--;
			}
			reverse(ans.begin(), ans.end());
			num >>= 1;
			cout << num << " dec\n"
				 << ans << " hex\n\n";
		}
		else
		{
			string aux, ans;
			istringstream str(resp);
			int64 num, numh;
			str >> num;
			numh = num;
			while (num)
			{
				if (num % 2)
					aux += '1';
				else
					aux += '0';
				num /= 2;
			}
			while (numh)
			{
				if (numh % 16 == 0)
					ans += '0';
				else if (numh % 16 == 1)
					ans += '1';
				else if (numh % 16 == 2)
					ans += '2';
				else if (numh % 16 == 3)
					ans += '3';
				else if (numh % 16 == 4)
					ans += '4';
				else if (numh % 16 == 5)
					ans += '5';
				else if (numh % 16 == 6)
					ans += '6';
				else if (numh % 16 == 7)
					ans += '7';
				else if (numh % 16 == 8)
					ans += '8';
				else if (numh % 16 == 9)
					ans += '9';
				else if (numh % 16 == 10)
					ans += 'a';
				else if (numh % 16 == 11)
					ans += 'b';
				else if (numh % 16 == 12)
					ans += 'c';
				else if (numh % 16 == 13)
					ans += 'd';
				else if (numh % 16 == 14)
					ans += 'e';
				else if (numh % 16 == 15)
					ans += 'f';
				numh /= 16;
			}
			reverse(ans.begin(), ans.end());
			reverse(aux.begin(), aux.end());
			cout << ans << " hex\n"
				 << aux << " bin\n\n";
		}
	}
	return 0;
}
