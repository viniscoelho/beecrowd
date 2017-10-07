#include <queue>
#include <vector>
#include <iostream>
#define mp make_pair

using namespace std;

typedef pair<int, int> ii;
typedef pair<ii, int> iii;

bool visited[8][8];

int main(){
    ios::sync_with_stdio(false);
	string posA, posB;
    while ( cin >> posA >> posB ){
        queue<iii> movimentos;
        for ( int i = 0; i < 8; ++i ){
            for ( int j = i; j < 8; ++j )
				visited[i][j] = visited[j][i] = false;
			visited[i][i] = false;
		}
        int x = posA[1]-49, y = posA[0]-97, a = posB[1]-49, b = posB[0]-97;
        movimentos.push( mp( mp(x, y), 0 ) );
        visited[x][y] = true;
		cout << "To get from " << posA << " to " << posB << " takes ";
        while ( !movimentos.empty() ){
			int p1 = movimentos.front().first.first;
			int p2 = movimentos.front().first.second;
			int m = movimentos.front().second;
			movimentos.pop();
			if ( p1 == a && p2 == b && visited[p1][p2] ){
				cout << m << " knight moves.\n";
				break;
			}
			else{
				if ( p1+1 <= 7 && p2+2 <= 7 && !visited[p1+1][p2+2] ){
					movimentos.push( mp( mp(p1+1, p2+2), m+1 ) );
					visited[p1+1][p2+2] = true;
				}
				if ( p1+2 <= 7 && p2+1 <= 7 && !visited[p1+2][p2+1] ){
					movimentos.push( mp( mp(p1+2, p2+1), m+1 ) );
					visited[p1+2][p2+1] = true;
				}
				if ( p1+1 <= 7 && p2-2 >= 0 && !visited[p1+1][p2-2] ){
					movimentos.push( mp( mp(p1+1, p2-2), m+1) );
					visited[p1+1][p2-2] = true;
				}
				if ( p1+2 <= 7 && p2-1 >= 0 && !visited[p1+2][p2-1] ){
					movimentos.push( mp( mp(p1+2, p2-1), m+1 ) );
					visited[p1+2][p2-1] = true;
				}
				if ( p1-1 >= 0 && p2-2 >= 0 && !visited[p1-1][p2-2] ){
					movimentos.push( mp( mp(p1-1, p2-2), m+1 ) );
					visited[p1-1][p2-2] = true;
				}
				if ( p1-2 >= 0 && p2-1 >= 0 && !visited[p1-2][p2-1] ){
					movimentos.push( mp( mp(p1-2, p2-1), m+1 ) );
					visited[p1-2][p2-1] = true;
				}
				if ( p1-1 >= 0 && p2+2 <= 7 && !visited[p1-1][p2+2] ){
					movimentos.push( mp( mp(p1-1, p2+2), m+1 ) );
					visited[p1-1][p2+2] = true;
				}
				if ( p1-2 >= 0 && p2+1 <= 7 && !visited[p1-2][p2+1] ){
					movimentos.push( mp( mp(p1-2, p2+1), m+1 ) );
					visited[p1-2][p2+1] = true;
				}
			}
        }
	}
    return 0;
}
