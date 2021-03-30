#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    while(1)
    {
        stack<char> s;
        string str;
        bool flag = false;
        getline(cin ,str);
        if (str == ".")
            break;
        for(int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(' || str[i] == '[')
                s.push(str[i]);
            else if (str[i] == ')')
            {
                if (s.empty()|| s.top() != '(')
                {
                    flag = true;
                    break;
                }
                s.pop();
            }
            else if (str[i] == ']')
            {
                if (s.empty() || s.top() != '[')
                {
                    flag = true;
                    break;
                }
                s.pop();
            }
        }
        if (flag || !s.empty())
            cout << "no\n";
        else
            cout << "yes\n";
    }
}
