#include <iostream>
#include <stack>

using namespace std;

void printStack(stack<char> &s)
{
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}

int main()
{
    string str;
    stack<char> s;
    bool flag = false;

    getline(cin, str);
    for(char c : str)
    {
        if (c == '<')
        {
            printStack(s);
            flag = true;
            cout << c;
        }
        else if (c == '>')
        {
            cout << c;
            flag = false;
        }
        else if (c == ' ')
        {
            printStack(s);
            cout << c;
        }
        else if (flag)
            cout << c;
        else
            s.push(c);
    }
    printStack(s);
    cout << '\n';
}
