#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <iomanip>
#include <tr1/unordered_map>
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

typedef long long int64;

char matrix[60][60];

int main()
{
	ios::sync_with_stdio(false);
	int t, l, c, x;
	cin >> t;
	while ( t-- )
	{
		cin >> l >> c;
		unordered_map<string, int> bib;
		for ( int i = 0; i < l; i++ )
			for ( int j = 0; j < c; j++ )
			{
				cin >> matrix[i][j];
				string temp = "";
				temp += matrix[i][j];
				if ( bib.count(temp) ) bib[temp]++;
				else bib.insert(mp(temp, 1));
			}

		for ( int i = 0; i < l; i++ )
		{
			string s = "";
			for ( int j = 0; j < c; j++ )
			{
				s += matrix[i][j];
			}
			int tam = s.size();
			for ( int k = 2; k <= tam; k++ )
			{
				for ( int h = 0; h < tam && h+k <= tam; h++ )
				{
					string temp = s.substr(h, k);
					if ( bib.count(temp) ) bib[temp]++;
					else bib.insert(mp(temp, 1));
				}
			}
		}

		for ( int j = 0; j < c; j++ )
		{
			string s = "";
			for ( int i = 0; i < l; i++ )
			{
				s += matrix[i][j];
			}
			int tam = s.size();
			for ( int k = 2; k <= tam; k++ )
			{
				for ( int h = 0; h < tam && h+k <= tam; h++ )
				{
					string temp = s.substr(h, k);
					if ( bib.count(temp) ) bib[temp]++;
					else bib.insert(mp(temp, 1));
				}
			}
		}

		cin >> x;
		string pz;
		while ( x-- )
		{
			cin >> pz;
			cout << bib[pz] << endl;
		}
				
	}
	return 0;
}