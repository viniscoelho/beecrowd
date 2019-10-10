#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <set>
#include <cmath>

using namespace std;

stack<char> s;
vector<char> output;

bool checkOperator(char p)
{
    if (p == '+' || p == '-' || p == '*' || p == '/' || p == '^')
        return true;
    return false;
}

int hasPrecedence(char p, char q)
{
    if (p == '^' && (q == '+' || q == '-'))
        return 1;
    if ((p == '+' || p == '-') && q == '^')
        return -1;
    if (p == '^' && (q == '*' || q == '/'))
        return 1;
    if ((p == '*' || p == '/') && q == '^')
        return -1;
    if ((p == '*' || p == '/') && (q == '+' || q == '-'))
        return 1;
    if ((p == '+' || p == '-') && (q == '*' || q == '/'))
        return -1;
    return 0;
}

void setOperator(char op)
{
    queue<char> temp;
    if (!s.empty() && s.top() != '(' && hasPrecedence(op, s.top()) <= 0)
    {
        output.push_back(s.top());
        s.pop();
    }

    while (!s.empty() && s.top() != '(' && hasPrecedence(op, s.top()) <= 0)
    {
        temp.push(s.top());
        s.pop();
    }
    s.push(op);

    while (!temp.empty())
    {
        output.push_back(temp.front());
        temp.pop();
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char ch[1010];
        string input;
        output.clear();
        scanf(" %[^\n]", ch);
        for (int i = 0; i < strlen(ch); i++)
        {
            if (ch[i] == '(')
            {
                if (input.length() && isdigit(input[input.length() - 1]))
                    input += '#';
            }
            else if (isdigit(ch[i]))
            {
                if (input.length() && input[input.length() - 1] == ')')
                    input += '#';
            }
            input += ch[i];
        }

        for (size_t i = 0; i < input.length(); i++)
        {
            if (isdigit(input[i]) || isalpha(input[i]))
                output.push_back(input[i]);
            else if (checkOperator(input[i]))
            {
                setOperator(input[i]);
            }
            else if (input[i] == '(')
                s.push('(');
            else if (input[i] == ')')
            {
                while (!s.empty() && s.top() != '(')
                {
                    output.push_back(s.top());
                    s.pop();
                }
                if (!s.empty())
                    s.pop();
            }
        }

        while (!s.empty())
        {
            output.push_back(s.top());
            s.pop();
        }

        for (int i = 0; i < output.size(); i++)
            if (output[i] != '#')
                printf("%c", output[i]);
        printf("\n");
    }

    return 0;
}
