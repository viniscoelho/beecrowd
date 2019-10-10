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
#include <sstream>
#include <stack>
#include <string>
#include <unordered_set>
#include <vector>
#define mp make_pair
#define pb push_back
#define MAXV 200100
#define PI 3.14159
#define TWOPI 2 * PI

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef long long int64;

// returns the value when a specific operator
// operates on two operands
int eval(int op1, int op2, char operate)
{
    switch (operate) {
    case '*':
        return op2 * op1;
    case '/':
        return op2 / op1;
    case '+':
        return op2 + op1;
    case '-':
        return op2 - op1;
    default:
        return 0;
    }
}

// evaluates the postfix operation
// this module neither supports multiple digit integers
// nor looks for valid expression
// However it can be easily modified and some additional
// code can be added to overcome the above mentioned limitations
// it's a simple function which implements the basic logic to
// evaluate postfix operations using stack
int evalPostfix(string& postfix, int size)
{
    stack<int> s;
    int i = 0;
    char ch;
    int val;
    while (i < size) {
        ch = postfix[i];
        if (isdigit(ch)) {
            // we saw an operand
            // push the digit onto stack
            s.push(ch - '0');
        } else {
            // we saw an operator
            // pop off the top two operands from the
            // stack and evalute them using the current
            // operator
            int op1 = s.top();
            s.pop();
            int op2 = s.top();
            s.pop();
            val = eval(op1, op2, ch);
            // push the value obtained after evaluating
            // onto the stack
            s.push(val);
        }
        i += 2;
    }
    return val;
}

// main
int main()
{
    ios::sync_with_stdio(false);
    string postfix;
    while (getline(cin, postfix)) {
        cout << evalPostfix(postfix, postfix.size()) << endl;
    }
    return 0;
}