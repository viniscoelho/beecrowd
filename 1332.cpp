#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define mp make_pair
#define pb push_back
#define MAXV 200100

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int64;

/*
    Calculates the distance between two strings
*/

int levenshteinDistance(string s, string t)
{
    // degenerate cases
    if (s == t)
        return 0;
    if (s.size() == 0)
        return t.size();
    if (t.size() == 0)
        return s.size();

    // create two work vectors of integer distances
    vector<int> v0(t.size() + 1);
    vector<int> v1(t.size() + 1);

    // initialize v0 (the previous row of distances)
    // this row is A[0][i]: edit distance for an empty s
    // the distance is just the number of characters to delete from t
    for (int i = 0; i < v0.size(); i++)
        v0[i] = i;

    for (int i = 0; i < s.size(); i++) {
        // calculate v1 (current row distances) from the previous row v0
        // first element of v1 is A[i+1][0]
        // edit distance is delete (i+1) chars from s to match empty t
        v1[0] = i + 1;

        // use formula to fill in the rest of the row
        for (int j = 0; j < t.size(); j++) {
            int cost = (s[i] == t[j]) ? 0 : 1;
            v1[j + 1] = min(v1[j] + 1, min(v0[j + 1] + 1, v0[j] + cost));
        }

        // copy v1 (current row) to v0 (previous row) for next iteration
        for (int j = 0; j < v0.size(); j++)
            v0[j] = v1[j];
    }

    return v1[t.size()];
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string num;
    while (n--) {
        cin >> num;
        if (levenshteinDistance("one", num) <= 1)
            cout << 1 << endl;
        else if (levenshteinDistance("two", num) <= 1)
            cout << 2 << endl;
        else if (levenshteinDistance("three", num) <= 1)
            cout << 3 << endl;
    }
}