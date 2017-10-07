#include <cstdio>
#include <iostream>
#define MAX 2010

using namespace std;

typedef pair<int, int> ii;

bool ir[MAX][MAX];
int visitado[MAX], visited = 1;
int v, e, s = 0;

void inicializa(){
	for ( int i = 0; i < v; ++i ){
		for ( int j = i; j < v; ++j )
			ir[i][j] = ir[j][i] = false;
		ir[i][i] = false;
	}
}

void runDFS( int u ){
	for ( int i = 0; i < v; i++ )
		if ( ir[u][i] && visitado[i] != visited ){
			visitado[i] = visited, s++;
		runDFS(i);
	}
}

int main(){
    ios::sync_with_stdio(false);
    int x, y, t;
    for ( cin >> v >> e; v + e; cin >> v >> e ){
        inicializa();
        for ( int i = 0; i < e; i++ ){
            cin >> x >> y >> t;
            if ( t == 1 ) ir[x-1][y-1] = true;
            else ir[x-1][y-1] = ir[y-1][x-1] = true;
        }
        int c = 0;
        for ( int i = 0; i < v; ++i ){
            s = 0;
            runDFS(i); visited++;
            if ( s == v ) c++;
			else break;
        }
        if ( c == v ) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}