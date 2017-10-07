#include <cstring>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <map>
#define mp make_pair

using namespace std;

typedef pair<string, string> ss;

int main(){
	ios::sync_with_stdio(false);
	map<ss, string> cadeia;
	cadeia.insert( mp( mp("ave", "carnivoro"), "aguia" ) );
	cadeia.insert( mp( mp("ave", "onivoro"), "pomba" ) );
	cadeia.insert( mp( mp("mamifero", "onivoro"), "homem" ) );
	cadeia.insert( mp( mp("mamifero", "herbivoro"), "vaca" ) );
	cadeia.insert( mp( mp("inseto", "hematofago"), "pulga" ) );
	cadeia.insert( mp( mp("inseto", "herbivoro"), "lagarta" ) );
	cadeia.insert( mp( mp("anelideo", "hematofago"), "sanguessuga" ) );
	cadeia.insert( mp( mp("anelideo", "onivoro"), "minhoca" ) );
	string a, b, c;
	cin >> a >> b >> c;
	cout << cadeia[mp(b, c)] << "\n";
	
    return 0;
}
