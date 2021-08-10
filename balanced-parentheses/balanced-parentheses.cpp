#include <bits/stdc++.h>
using namespace std;

bool isValidParentheses(string &str)
{
    stack <char> stk;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        {
            stk.push('(');
        }
        else if (str[i] == ')')
        {
            if (stk.empty())
            {
                return false;
            }
            else stk.pop();
        }
    }
    if (stk.size() == 0)
        return true;
    return false;
}

int main()
{
    string str;
    cin >> str;
    if (isValidParentheses(str)) printf("Valid!\n");
    else printf("Invalid!\n");
    return 0;
}
