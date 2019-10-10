#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <unordered_set>
#include <vector>
#define pb push_back
#define mp make_pair

using namespace std;

typedef unsigned long long int64;
typedef pair<int, int> ii;

map<int, ii> positions;
unordered_set<string> visited;

char g_matrix[8][8];

int dir[][2] = {
    { -1, -2 }, { -2, -1 }, { -2, 1 }, { -1, 2 }, { 1, -2 }, { 2, -1 }, { 2, 1 }, { 1, 2 }
};

struct edge {
    int x, y, count;
    char matrix[8][8];
    vector<ii> pawns;
    edge(int x = 0, int y = 0, int count = 0)
        : x(x)
        , y(y)
        , count(count)
    {
    }

    string getHash()
    {
        string resp = "";
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++)
                resp += matrix[i][j];
            resp += '*';
        }
        return resp;
    }
};

void initialize()
{
    int k = 0;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            positions[k++] = mp(i, j);
}

void capture(ii pos, edge& e)
{
    for (int i = 0; i < e.pawns.size(); i++) {
        if (e.pawns[i] == pos) {
            e.matrix[pos.first][pos.second] = 'h';
            e.pawns.erase(e.pawns.begin() + i);
            return;
        }
    }
}

bool movePawns(edge& e)
{
    for (int i = 0; i < e.pawns.size(); i++)
        e.matrix[e.pawns[i].first][e.pawns[i].second] = '.';
    for (int i = 0; i < e.pawns.size(); i++) {
        ii a = e.pawns[i];
        e.pawns[i].first++;
        if (e.pawns[i].first > 7)
            return true; //couldn't capture this one
        if (e.matrix[a.first + 1][a.second] == 'h')
            return true; //just got hit by a pawn!
        e.matrix[a.first + 1][a.second] = 'p';
    }
    return false;
}

int bfs(int x, int y, vector<ii>& pawns)
{
    queue<edge> b;
    edge aux = edge(x, y, 0);
    memcpy(aux.matrix, g_matrix, sizeof(aux.matrix));
    aux.pawns = pawns;
    b.push(aux);

    //horse has the first move
    bool horseMove = true;
    while (!b.empty()) {
        aux = b.front();
        b.pop();
        if (!horseMove && movePawns(aux))
            continue;
        horseMove = false;
        for (int i = 0; i < 8; i++) {
            //original state
            edge e = aux;
            memcpy(e.matrix, aux.matrix, sizeof(e.matrix));
            e.pawns = aux.pawns;

            int p1 = e.x + dir[i][0];
            int p2 = e.y + dir[i][1];
            if (p1 < 0 || p2 < 0 || p1 > 7 || p2 > 7)
                continue;
            if (e.matrix[p1][p2] == 'p') {
                e.matrix[e.x][e.y] = '.';
                capture(mp(p1, p2), e);
            } else {
                e.matrix[e.x][e.y] = '.';
                e.matrix[p1][p2] = 'h';
            }

            string state = e.getHash();
            if (visited.count(state))
                continue;
            visited.insert(state);

            e.x = p1;
            e.y = p2;
            e.count++;

            if (!e.pawns.size())
                return e.count; //captured all of them

            b.push(e);
        }
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    initialize();
    int n, p, h;
    while (cin >> n && n) {
        ii a;
        vector<ii> pawns;
        memset(g_matrix, '.', sizeof(g_matrix));
        while (n--) {
            cin >> p;
            a = positions[p - 1];
            g_matrix[a.first][a.second] = 'p';
            pawns.pb(a);
        }
        cin >> h;
        a = positions[h - 1];
        g_matrix[a.first][a.second] = 'h';

        int resp = bfs(a.first, a.second, pawns);
        if (resp != -1)
            cout << resp << "\n";
        else
            cout << "impossible\n";
        visited.clear();
    }

    return 0;
}