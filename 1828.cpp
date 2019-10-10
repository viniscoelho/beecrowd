#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 110
#define pb push_back
#define mp make_pair

using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-9;
const double INF = 1e50;

struct pt;
typedef pair<pt, pt> line;
typedef vector<pt> polygon;
typedef pair<pt, int> ddi;
typedef pair<double, double> dd;
typedef pair<string, string> ss;

int readInt()
{
    bool minus = false;
    int result = 0;
    char ch = getchar_unlocked();
    while (true)
    {
        if (ch == '-')
            break;
        if (ch >= '0' && ch <= '9')
            break;
        ch = getchar_unlocked();
    }
    if (ch == '-')
        minus = true;
    else
        result = ch - '0';
    while (true)
    {
        ch = getchar_unlocked();
        if (ch < '0' || ch > '9')
            break;
        result = result * 10 + (ch - '0');
    }
    if (minus)
        return -result;
    else
        return result;
}

map<ss, int> jokenpo;

void initialize()
{
    jokenpo.insert(mp(mp("tesoura", "papel"), 1));
    jokenpo.insert(mp(mp("papel", "pedra"), 1));
    jokenpo.insert(mp(mp("pedra", "lagarto"), 1));
    jokenpo.insert(mp(mp("lagarto", "Spock"), 1));
    jokenpo.insert(mp(mp("Spock", "tesoura"), 1));
    jokenpo.insert(mp(mp("tesoura", "lagarto"), 1));
    jokenpo.insert(mp(mp("lagarto", "papel"), 1));
    jokenpo.insert(mp(mp("papel", "Spock"), 1));
    jokenpo.insert(mp(mp("Spock", "pedra"), 1));
    jokenpo.insert(mp(mp("pedra", "tesoura"), 1));
}

int main()
{
    int n;
    initialize();
    n = readInt();
    string a, b;
    for (int i = 1; i <= n; i++)
    {
        printf("Caso #%d: ", i);
        cin >> a >> b;
        if (a == b)
            printf("De novo!\n");
        else if (jokenpo.count(mp(a, b)))
            printf("Bazinga!\n");
        else
            printf("Raj trapaceou!\n");
    }
    return 0;
}
