#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <list>
#include <stack>
#include <tr1/unordered_map>
#define INF 0x3f3f3f3f
#define MAXV 4010
#define pb push_back
#define mp make_pair

using namespace std;
using namespace tr1;

typedef pair<int, int> ii;
typedef pair<int, string> is;
typedef pair<ii, is> ih;

int main(){
    ios::sync_with_stdio(false);
    string resp;
	int t = 0;
    while ( getline(cin, resp) ){
		if ( t > 0 ) cout << "\n";
		unordered_map<int, int> bib;
		unordered_map<int, int>::iterator it;
		priority_queue<ii> pq;
		for ( int i = 0; i < resp.size(); ++i ) bib[int(resp[i])]++;
		for ( it = bib.begin(); it != bib.end(); ++it ) pq.push( mp(-it->second, it->first) );
		while ( !pq.empty() ){
			cout << pq.top().second << " " << -pq.top().first << "\n";
			pq.pop();
		}
		t++;
    }
    return 0;
}
