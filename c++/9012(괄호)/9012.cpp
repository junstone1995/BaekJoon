#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string str;
        stack<char> s;
        cin >> str;
        for(int j = 0; j <str.length(); j++)
        {
            if (str[j] == '(')
            {
                s.push(j);
            }
            else
            {
                if(!s.empty())
                    s.pop();
                else
                {
                    s.push(j);
                    break;
                }
            }
        }
        if (s.empty())
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
