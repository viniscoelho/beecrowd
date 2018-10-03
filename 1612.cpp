#include <iostream>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <map>
#include <unordered_set>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef long long int64;

struct node{
	int pontos, vitorias, gols, pos;
	node(int pontos = 0, int vitorias = 0, int gols = 0, int pos = 0) : pontos(pontos), vitorias(vitorias), gols(gols), pos(pos) {}
};

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int64 a;
	while ( n-- )
	{
		cin >> a;
		if ( a & (1 << 0) ) a++;
		a /= 2;
		cout << a << endl;
	}
	return 0;
}